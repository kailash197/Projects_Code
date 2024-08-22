#include <iostream>
#include <vector>
struct rectangle
{
    /* data */
    int length;
    int breadth;
};

struct complex
{
    int real;
    int img;
};

int main() {
    struct rectangle r={10, 5};
    std::cout << "Area of rectangle: " << r.length * r.breadth;

    return 0;
}
