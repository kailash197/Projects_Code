#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
                    /*
                    2D ARRAYS
                    */

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
    cout<<endl<<endl;
    
                        /*
                        3D ARRAYS
                        */
    
    //notice double brackets
    // correctly nest and group the elements for each dimension of the array.
    array<array<int,3>, 2> t2 = {{
        {2,5,4},
        {1,3,7}
        }};
    //RGB image of size 4x5
    std::array<std::array<std::array<int, 5>, 4>, 3> t3 =  {{
        {{
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        }},
        {{
            {6,7,8,9,10},
            {6,7,8,9,10},
            {6,7,8,9,10},
            {6,7,8,9,10}
        }},
        {{
            {11,12,13,14,15},
            {11,12,13,14,15},
            {11,12,13,14,15},
            {11,12,13,14,15}
        }}
    }};

    t3 = {{
        {{
            {1,2,4},
            {4,5,6},
            {7,8,9}
        }},
        {{
            {11,22,33},
            {44,55,66},
            {77,88,99}
        }},
        {{
            {111,222,333},
            {444,555,666},
            {777,888,999}
        }}
    }}; //default 0's applied for missing values

    // Print the array for verification
    for (const auto& channel : t3) {
        for (const auto& row : channel) {
            for (const auto& elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }





    return 0;
}
