#include <iostream>
using namespace std;

int& reference(int array[], int index) {
    return array[index];  // Returning a reference to the specified index in the array
}

int main() {
    int* myArray = new int[5];  // Dynamically allocate an array of 5 integers

    // Initialize the array with some values
    for (int i = 0; i < 5; ++i) {
        myArray[i] = i * 10;  // Initialize elements to 0, 10, 20, 30, 40
    }

    int temp = 4;

    // Access the value at index 4 through the reference
    cout << "Value at index " << temp << ": " << reference(myArray, temp) << endl;

    // Modify the value at index 4 through the reference
    reference(myArray, temp) = 100;

    cout << "Modified value at index " << temp << ": " << myArray[temp] << endl;

    // Clean up the dynamically allocated memory
    delete[] myArray;

    return 0;
}
