#include <iostream>
using namespace std;

int main() {
    auto x = 5; // x will be deduced as int
    auto y = 5.5; // y will be deduced as double
    auto w = "Hello"; // z will be deduced as const char*
    auto z = 'c';
    cout << "w: " << w << ", type: " << typeid(w).name() << endl;
    cout << "x: " << x << ", type: " << typeid(x).name() << endl;   
    cout << "y: " << y << ", type: " << typeid(y).name() << endl;
    cout << "z: " << z << ", type: " << typeid(z).name() << endl;

    auto k = x*y + z;
    cout<<"k = x*y + z= "<<k<<", type: " << typeid(k).name() << endl<<endl;


    return 0;
}
