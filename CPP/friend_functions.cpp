#include <iostream>

using namespace std;

class MyClass;  // Forward declaration of MyClass

class TestClass {
public:
    void display(MyClass& obj);  // Declare the display function
};

class MyClass {
private:
    int x;

public:
    MyClass(int value) : x(value) {}

    // Declare friend function
    friend void printX(MyClass& obj);
    friend void TestClass::display(MyClass& obj);
};

// Definition of the friend function outside the class
void printX(MyClass& obj) {
    std::cout << "The value of x is: " << obj.x << std::endl; // x is accessible inside friend function
}

// Definition of the display function
void TestClass::display(MyClass& obj) {
    std::cout << "TestClass: the value of x is: " << obj.x << std::endl;  // x is accessible because display is a friend
}

int main() {
    MyClass obj(5);
    printX(obj);  // This will print: "The value of x is: 5"
    
    TestClass testObj;
    testObj.display(obj);  // This will print: "TestClass: the value of x is: 5"
    
    return 0;
}
