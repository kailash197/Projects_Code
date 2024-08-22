#include <iostream>
#include <cstdarg> // Required for variadic functions

// Variadic function to calculate the sum of a variable number of integers
int sum(int count, ...) {
    va_list args; // Declare a variable of type va_list
    int sum = 0;

    // Initialize the va_list to point to the first argument after count
    va_start(args, count);

    // Loop through each argument and accumulate the sum
    for (int i = 0; i < count; ++i) {
        // Use va_arg to retrieve each argument
        sum += va_arg(args, int);
    }

    // Clean up the va_list
    va_end(args);

    return sum;
}

int main() {
    std::cout << "Sum: " << sum(3, 10, 20, 30) << std::endl; // Output: Sum: 60
    std::cout << "Sum: " << sum(5, 1, 2, 3, 4, 5) << std::endl; // Output: Sum: 15

    return 0;
}
