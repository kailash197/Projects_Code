#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() function" << endl;
    }
    virtual void display() {
        cout << "Base class display() function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show() function" << endl;
    }
    void display() override {
        cout << "Derived class display() function" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // The pointer type is Base*, but the actual object is of type Derived.
    basePtr->show();     // Calls Derived's show() function
    basePtr->display();  // Calls Derived's display() function

    return 0;
}
/*
Derived class show() function
Derived class display() function
*/
