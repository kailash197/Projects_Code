#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int intResult = add(3, 4);         // Works with integers
    double doubleResult = add(3.5, 4.5); // Works with doubles

    std::cout << "Int result: " << intResult << std::endl;
    std::cout << "Double result: " << doubleResult << std::endl;

    return 0;
}
