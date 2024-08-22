#include <iostream>
#include <vector>
struct rectangle
{
    /* data */
    int length;
    int breadth;
};

int main() {
    struct rectangle r={10, 5};
    std::cout << "Area of rectangle: " << r.length * r.breadth << std::endl;

    struct rectangle *p = &r;
    p=&r;
    std::cout << "length " << (*p).length << std::endl << "breadth  " << p -> breadth;
    return 0;
}

/**
 * OUTPUT:
 * Area of rectangle: 50
 * length 10
 * breadth  5
*/