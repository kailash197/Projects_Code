#include <iostream>
#include <vector>
#include <algorithm> // for std::for_each

int main() {
    // Define a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::for_each to iterate through each element
    std::for_each(
        numbers.begin(), 
        numbers.end(), 
        [](int num) {
            std::cout << num << " ";
            }
        );

    std::cout << std::endl;
    return 0;
}
