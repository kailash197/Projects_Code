#include <vector>
#include <iostream>
#include <initializer_list>

/*
Initializer list:
    - C++11 introduced a standard library type called std::initializer_list<T>,
        which allows constructors and functions to accept a list of values
    - are type safe and define which type is allowed in the the list.
    - makes it easy to write funtions that can accept a variable number of arguments
    - allows to initizlize containers and objects using a list of values enclosed in {}
    - to improve uniform initialization and make code more readable and expressive.
    - Initializing STL containers (std::vector, std::map, etc.)
    - Creating custom constructors that accept multiple values
    - Uniform initialization across types
*/

int calcTotalSum(std::initializer_list<int> the_list){
    int total = 0;
    for (int value : the_list){
        total += value;
    }
    return total;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};  // vector init using initializer list
    for (int i : v) {
        std::cout << i << " ";
    }
    // function: mutliple args with initializer list
    std::cout <<std::endl << calcTotalSum({1,2,3,4,5}) <<std::endl;
    std::cout << calcTotalSum({1,5}) << std::endl;
    return 0;
}
