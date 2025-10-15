#include <iostream>
#include <vector>

// The vector container stores elements in contiguous memory like a C-style array.
// You can index into a vector using operator[] and add elements to the back or insert them elsewhere.

// Inserting/deleting elements generally takes linear time.
// However, operations at the end of the vector (e.g., push_back) run in amortized constant time.

// Random access of elements (e.g., via operator[]) has constant time complexity.

// You can use vector as a fixed-length array by specifying the number of elements in the constructor.

// operator[] allows access and modification of elements but does NOT perform bounds checking.
// Accessing out-of-bounds elements using operator[] results in undefined behavior.

// Compiler behavior for out-of-bounds access varies:
// - MSVC in debug mode: runtime error.
// - MSVC in release mode: no bounds checking for performance.

// Use at() instead of operator[] for bounds-checked access.
// at() throws std::out_of_range exception if index is invalid.

// front() returns a reference to the first element.
// back() returns a reference to the last element.
// Calling front() or back() on an empty vector results in undefined behavior.

template<typename kind>
void print_vect(const std::vector<kind> arr){
    std::cout << std::endl << "size of array is " << arr.size() <<std::endl;
    for(auto& val: arr){
        std::cout << val << std::endl;
    }
}

int main(){
    // initializer list
    std::vector<int> arr = {1,2};
    print_vect(arr);

    //update last element to 737
    arr[arr.size()-1] = 737;
    std::cout << "last element " << arr[arr.size()-1] <<std::endl;

    //push some values
    arr.push_back(23);
    print_vect(arr);

    // fixed length array
    std::vector<double> fl_scores(6, 2.3);
    print_vect(fl_scores);
    fl_scores.push_back(12.3); // can update the size though
    print_vect(fl_scores);

    return 0;
}