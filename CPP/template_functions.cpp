#include <iostream>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double p = 3.14, q = 1.59;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    std::cout << "Before swap: p = " << p << ", q = " << q << std::endl;
    swapValues(p, q);
    std::cout << "After swap: p = " << p << ", q = " << q << std::endl;

    return 0;
}
/*
Before swap: x = 5, y = 10
After swap: x = 10, y = 5
Before swap: p = 3.14, q = 1.59
After swap: p = 1.59, q = 3.14
*/
