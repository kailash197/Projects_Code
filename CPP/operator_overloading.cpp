#include <iostream>

using namespace std;

class MyVector {
private:
    int x_coordinate;
    int y_coordinate;

public:
    MyVector(int xval, int yval) : x_coordinate(xval), y_coordinate(yval)  {}

    // Overloading the > operator
    //Together, these const qualifiers ensure that:
    // The parameter other is treated as read-only within the operator> function.
    // The operator> function itself does not modify the state of the current object, this object.

    bool operator>(const MyVector& other) const {
        return (x_coordinate*x_coordinate + y_coordinate *y_coordinate) > \
        (other.x_coordinate*other.x_coordinate + other.y_coordinate * other.y_coordinate);
    }
    friend ostream& operator<<(ostream& os, const MyVector& vect){
        os << "MyVector: ["<<vect.x_coordinate<<" ,"<<vect.y_coordinate<<"] ";
        return os;
    }
};

int main() {
    MyVector v1(3, 4);
    MyVector v2(2, 5);

    // Using the overloaded operator >
    if (v1 > v2) {
        std::cout << v1 <<"is greater than "<< v2 << std::endl;
    } else {
        std::cout << v1 <<"is not greater than "<< v2 << std::endl;
    }

    return 0;
}
