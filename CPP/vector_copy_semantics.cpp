#include <iostream>
#include <vector>
#include <algorithm> // Required for sort, reverse
#include <memory>

/*
Demonstrates:
Object lifecycle and copy semantics: It creates Robot objects using default, parameterized, and copy constructors, 
then shows destructor calls during vector reallocation and scope exit.
*/

using namespace std;

class Robot {
    private:
        float version;
        std::string model;
    public:
        void display(){
            std::cout << "Model: " << model << ", Version: " << version <<std::endl;
        }
        Robot(): version(0.0), model("generic"){
            std::cout<<"Default Constructor: ";
            this->display();
        }
        Robot(float v, std::string m): version(v), model(m){
            std::cout<<"Para Constructor: ";
            this->display();
        };
        Robot(const Robot& r){
            this->version = r.version;
            this->model = r.model;
            std::cout<<"Copy Constructor: ";
            this->display();
        }
        ~Robot(){
            std::cout<<"Destructor: ";
            this->display();
        }
        void setVersion(const float& version){
            this->version = version;
        }
        void setModel(const std::string& model){
            this->model = model;
        }
};

int main() {
    // 1. Initialization
    auto my_robot = std::make_unique<Robot>(1.0, "ultra");
    my_robot->display();


    vector<Robot> robots(5);
    robots.push_back(*my_robot);
    my_robot->setVersion(1.2);
    my_robot->setModel("awseone");

    for (auto& robot: robots){
        robot.display();
    }
    return 0;
}
/*
Para Constructor: Model: ultra, Version: 1
Model: ultra, Version: 1
Default Constructor: Model: generic, Version: 0
Default Constructor: Model: generic, Version: 0
Default Constructor: Model: generic, Version: 0
Default Constructor: Model: generic, Version: 0
Default Constructor: Model: generic, Version: 0
Copy Constructor: Model: ultra, Version: 1
Copy Constructor: Model: generic, Version: 0
Copy Constructor: Model: generic, Version: 0
Copy Constructor: Model: generic, Version: 0
Copy Constructor: Model: generic, Version: 0
Copy Constructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Model: generic, Version: 0
Model: generic, Version: 0
Model: generic, Version: 0
Model: generic, Version: 0
Model: generic, Version: 0
Model: ultra, Version: 1
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: generic, Version: 0
Destructor: Model: ultra, Version: 1
Destructor: Model: awseone, Version: 1.2
*/