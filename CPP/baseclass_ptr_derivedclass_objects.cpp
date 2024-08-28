#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show() method called" << endl;
    }

    void print() {
        cout << "Base class print() method called" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Override the base class method
        cout << "Derived class show() method called" << endl;
    }

    void print() {
        cout << "Derived class print() method called" << endl;
    }
};

int main() {
    Base* basePtr;           // Base class pointer
    Derived derivedObj;      // Derived class object

    basePtr = &derivedObj;   // Base class pointer pointing to derived class object

    // Call the methods
    basePtr->show();  // Calls Derived class's show() because it's virtual
    basePtr->print(); // Calls Base class's print() because it's not virtual

    
    
    Base baseObj;
    Derived* derivedPtr;
    /* other way around
    derivedPtr = &baseObj; Error a value of type "Base *" cannot be assigned to an entity of type "Derived *
    */


    return 0;
}
