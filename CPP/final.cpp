#include <iostream>

// Base class
class Base {
public:
    virtual void foo() final {
        std::cout << "Base::foo() called" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Trying to override the final function will result in a compilation error
    // void foo() override { // Uncommenting this line will result in a compilation error
    //     std::cout << "Derived::foo() called" << std::endl;
    // }
};

int main() {
    Base baseObj;
    baseObj.foo(); // Outputs: Base::foo() called

    return 0;
}
/*
Base::foo() called
*/