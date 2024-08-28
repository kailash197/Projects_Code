#include <iostream>

using namespace std;

class Robot {
    private:
        float mass;
    public:
        Robot(){ cout<<"Robot default constructor"<<endl;}
        Robot(float m) { 
            cout<<"Robot parameterized constructor"<<endl;
            mass = m; 
            }
};

class Drone: public Robot {
    private:
        int wings;
    public:
        Drone(){ cout<<"Drone default constructor"<<endl;}
        Drone(int wings){
            cout<<"Drone parameterized constructor"<<endl;
            this->wings = wings;
        }
        Drone(float m, int w):Robot(m){
            cout<<"Drone double parameterized constructor"<<endl;
            wings=w;
        }
    
};

int main(){
    cout<<"Create robot object"<<endl;
    Robot r;
    cout<<endl<<"Create drone object: "<<endl;
    Drone d1(5);
    cout<<endl<<"Create drone object: "<<endl;
    Drone d(23.3, 4);
    return 0; 
}
/*
Create robot object
Robot default constructor

Create drone object: 
Robot default constructor
Drone parameterized constructor

Create drone object: 
Robot parameterized constructor
Drone double parameterized constructor
*/