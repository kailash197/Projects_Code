#include <iostream>
#include <array>

int main() {
    // Define a 2D array using std::array
    std::array<std::array<int, 3>, 2> testArray = {{
        {2, 5, 4},
        {1, 3, 7}
    }};

    // Calculate the number of rows and columns
    int rows = testArray.size();         // Number of rows
    int cols = testArray[0].size();      // Number of columns

    // Print the array
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            std::cout << testArray[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
