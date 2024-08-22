#include <iostream>
#include <functional>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::function<int(int, int)> func = add;

    int result = func(3, 4);
    std::cout << "Result: " << result << std::endl; // Output: Result: 7

    return 0;
}
