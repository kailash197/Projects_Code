#include <iostream>
#include <vector>

int main() {
    // Define a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    //  range-based for loop to iterate over each element
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (auto num : numbers) { // does not modify original seq, but would have modified if auto& num
        num++;
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }


    std::cout << std::endl;
    return 0;
}
