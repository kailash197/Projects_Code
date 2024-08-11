#include <iostream>
#include <optional>

int main() {
    std::optional<int> opt = 42;
    if (opt) {
        std::cout << "Optional value: " << *opt << std::endl;
    }
    return 0;
}


// g++ -std=c++17 -o optional optiona.cpp
