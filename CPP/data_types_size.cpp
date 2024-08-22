#include <iostream>
#include <climits> // For CHAR_BIT
#include <cstddef> // For nullptr_t

int main() {
    std::cout << "Number of bits capacity of standard data types:" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "char: " << CHAR_BIT << " bits" << std::endl;
    std::cout << "short: " << sizeof(short) * CHAR_BIT << " bits" << std::endl;
    std::cout << "int: " << sizeof(int) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long: " << sizeof(long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long long: " << sizeof(long long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "float: " << sizeof(float) * CHAR_BIT << " bits" << std::endl;
    std::cout << "double: " << sizeof(double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long double: " << sizeof(long double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "bool: " << sizeof(bool) * CHAR_BIT << " bits" << std::endl;
    std::cout << "nullptr_t: " << sizeof(std::nullptr_t) * CHAR_BIT << " bits" << std::endl;

    return 0;

// Number of bits capacity of standard data types:
// ------------------------------------------------
// char: 8 bits
// short: 16 bits
// int: 32 bits
// long: 64 bits
// long long: 64 bits
// float: 32 bits
// double: 64 bits
// long double: 128 bits
// bool: 8 bits
// nullptr_t: 64 bits
}
