#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0) : real(r), img(i) {}

    // Friend function to overload <<
    friend ostream& operator<<(ostream &out, const Complex &c);

    // Friend function to overload >>
    friend istream& operator>>(istream &in, Complex &c);
};

// Overload <<
ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << "+i" << c.img;
    return out;
}

// Overload >>
istream& operator>>(istream &in, Complex &c) {
    char plus, i;
    // Assume input format is: "real+iimg"
    in >> c.real >> plus >> c.img >> i;
    return in;
}

int main() {
    Complex c1(10, 5);
    cout << "Original Complex number: " << c1 << endl;

    Complex c2;
    cout << "Enter a complex number (format: real+img i): ";
    cin >> c2; // Read a complex number from the input

    cout << "Entered Complex number: " << c2 << endl;

    return 0;
}
/*
Original Complex number: 10+i5
Enter a complex number (format: real+img i): 3+7i
Entered Complex number: 3+i7
*/
