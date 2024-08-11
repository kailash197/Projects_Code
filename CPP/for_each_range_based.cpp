#include <iostream>
#include <vector>

int main() {
    // Define a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    //  for-each loop to iterate over each element
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
    return 0;
}
