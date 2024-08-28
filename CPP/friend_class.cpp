#include <iostream>

using namespace std;

// Robot class definition
class Robot {
private:
    double batteryLevel;  // Private member representing the robot's battery level

public:
    Robot(double battery) : batteryLevel(battery) {}

    // Declare ControlSystem as a friend class
    friend class ControlSystem;
};

// ControlSystem class definition
class ControlSystem {
public:
    // Function to check if the robot has sufficient battery
    void checkBatteryLevel(Robot& robot) {
        if (robot.batteryLevel > 20) {
            cout << "Battery level is sufficient for operation." << endl;
        } else {
            cout << "Battery level is low. Please recharge the robot." << endl;
        }
    }

    // Function to recharge the robot's battery
    void rechargeBattery(Robot& robot, double amount) {
        robot.batteryLevel += amount;
        cout << "Recharged battery. Current level: " << robot.batteryLevel << "%" << endl;
    }
};

int main() {
    Robot myRobot(15);  // Robot with a battery level of 15%
    ControlSystem control;

    control.checkBatteryLevel(myRobot);  // This will warn about low battery

    control.rechargeBattery(myRobot, 30);  // Recharges the robot's battery

    control.checkBatteryLevel(myRobot);  // Now it should be sufficient

    return 0;
}
/*
Battery level is low. Please recharge the robot.
Recharged battery. Current level: 45%
Battery level is sufficient for operation.
*/
