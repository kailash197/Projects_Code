#include <tuple>
#include <iostream>
#include <map>
/*
Structured Bindings:
    - to **unpack tuples, pairs, arrays, and user-defined types** into individual named variables in a very clean and readable way.
    - declare multiple variables that are initialized with elements from an array, struct, pair or tuple.
    - have to use the `auto` keyword for structured bindings can’t specify specifics like `float`, `double` etc
    - nof variables declared must equal number of values in the right
*/

int main() {
    std::tuple<int, double, std::string> tup = {1, 3.14, "hello"};
    auto [i, d, s] = tup;  // structured binding
    std::cout << i << ", " << d << ", " << s << std::endl;
    
    std::array<float, 3> coordinates = {1.1, 2.2, 3.4};
    auto [x, y, z] = coordinates;
    std::cout << x << ", " << y << ", " << z << std::endl;
    
    // This feature is especially useful when working with STL containers
    // like std::map or std::unordered_map
    std::map<int, std::string> m = {{1, "one"}, {2, "two"}};
	for (const auto& [key, value] : m) {
        std::cout << key << ": " << value << std::endl;
    }
    return 0;
}