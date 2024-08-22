#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor
    // Rectangle(){}
    Rectangle(int w=0, int h=0) : width(w), height(h) {}

    void set_width(int w){ this->width=w;}
    void set_height(int h){this->height = h; }
    auto get_width(){ return width;}
    auto get_height(){ return height;}

    // Member function to calculate area
    int area() { return width * height;}
    int perimeter() { return 2*(height+width);}
};

int main() {
    // Dynamically allocate memory for a Rectangle object
    Rectangle* rectPtr = new Rectangle();
    // this is also valid Rectangle* rectPtr = new Rectangle; without empty parenthesis
    // both values assigned to 0 default

    // rectPtr->set_height(5);
    // rectPtr->set_width(10);
    // similar to Rectangle* rectPtr = new Rectangle(10,5);

    // Accessing member function using pointer to object
    cout << "Area: " << rectPtr->area() << endl;

    // Deallocate memory
    delete rectPtr;
    
    // 
    Rectangle r; // create in stack
    r.set_height(5);
    r.set_width(6);
    cout << "Area: " << r.area()<< endl;
    /*
    Rectangle r; // create in stack
    cout << "Area: " << r.area()<< endl;
    This will give a random garbage value as height and width are garbage value
    Only declared not initialized
    */

    return 0;
}
/*
Area: 50
Area: 30
*/