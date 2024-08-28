#include <iostream>
#include <exception>
#include <string>

// Base class for quadcopter exceptions
class QuadcopterException : public std::exception {
protected:
    std::string message;

public:
    QuadcopterException(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

// Derived class for battery-related exceptions
class BatteryLowException : public QuadcopterException {
public:
    BatteryLowException() : QuadcopterException("Error: Battery level too low to fly!") {}
};

// Derived class for motor-related exceptions
class MotorFailureException : public QuadcopterException {
public:
    MotorFailureException() : QuadcopterException("Error: Motor failure detected!") {}
};

class Quadcopter {
private:
    int batteryLevel; // Battery level percentage
    bool motorStatus; // True if motors are functioning, false otherwise

public:
    Quadcopter(int battery, bool motor) : batteryLevel(battery), motorStatus(motor) {}

    void checkSystems() {
        std::cout<<"Status Check:"<<std::endl;
        std::cout<<"Battery: "<<batteryLevel<<std::endl;
        std::cout<<"Motor: "<<(motorStatus?"Ok":"Problem")<<std::endl<<std::endl;
        if (batteryLevel < 20) {
            throw BatteryLowException();
        }
        if (!motorStatus) {
            throw MotorFailureException();
        }
    }

    void fly() {
        std::cout << "Command Received: Fly\nQuadcopter is flying!" << std::endl<<std::endl;
        batteryLevel -= 5;
    }
};

int main() {
    Quadcopter quad(30, true);  // Battery level is 15%, motor is functioning

    try {
        while(true){
            quad.checkSystems();  // This will throw a BatteryLowException
            quad.fly();
        }

    } catch (const BatteryLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const MotorFailureException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const QuadcopterException& e) {
        std::cerr << "Quadcopter error: " << e.what() << std::endl;
    }

    return 0;
}

/*
Status Check:
Battery: 30
Motor: Ok

Command Received: Fly
Quadcopter is flying!

Status Check:
Battery: 25
Motor: Ok

Command Received: Fly
Quadcopter is flying!

Status Check:
Battery: 20
Motor: Ok

Command Received: Fly
Quadcopter is flying!

Status Check:
Battery: 15
Motor: Ok

Error: Battery level too low to fly!
*/