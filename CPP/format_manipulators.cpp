#include <iostream>
#include <iomanip> // Required for setfill, setw, setprecision, etc.

using namespace std;

int main() {
    int num = 163;
    float pi = 3.14159265358979;

    // Integer formatting
    cout << "Hexadecimal: " << hex << num << endl; // prints A3
    cout << "Octal: " << oct << num << endl;       // prints 243
    cout << "Decimal: " << dec << num << endl;     // prints 163

    // Float formatting
    cout << fixed; // Use fixed-point notation
    cout << "Fixed-point format: " << pi << endl;  // prints 3.141593 (default precision)
    
    cout << scientific; // Use scientific notation
    cout << "Scientific format: " << pi << endl;  // prints 3.141593e+00

    // Other formatting
    cout << setw(10) << "hello" << endl; // Right-aligned within 10 spaces by default
    cout << left << setw(10) << "hello" << "world" << endl; // Left-aligned within 10 spaces
    cout << right << setw(10) << "hello" << "world" << endl; // Right-aligned within 10 spaces

    // Using ws to skip leading whitespace
    string str1, str2;
    cout << "Enter two words separated by spaces: ";
    cin >> str1 >> ws >> str2; // ws skips any leading whitespace before reading str2
    cout << "First word: " << str1 << endl;
    cout << "Second word: " << str2 << endl;

    return 0;
}
/*
Hexadecimal: a3
Octal: 243
Decimal: 163
Fixed-point format: 3.141593
Scientific format: 3.141593e+00
     hello
hello     world
     helloworld
Enter two words separated by spaces: Tony Stark
First word: Tony
Second word: Stark
*/