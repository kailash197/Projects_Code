#include <iostream>
#include <array>

int main() {
    // RGB image of size 4x5
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
