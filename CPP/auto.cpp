#include <iostream>
using namespace std;
/* auto:
- used to tell compiler to automatically deduce the type of a variable at compile time
- auto strips away both reference and const qualifiers

*/
/* uses of auto:
i. deduce a funtion's return type
ii. use in structured bindings
iii. deducing type of expresssion
iv. deduce the type of non-type template parameters
v. decltype(auto)
vi. alternate function syntax
vii. Generic lambda expression
*/
const std::string message = "hello, test";
const std::string& foo(){
    return message;
}

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

    // f1 type is std::string as auto strips both const and ref thus a copy is made.
    auto f1 = foo(); 

    // for const std::string&, if you dont want a copy!
    const auto& f2 = foo();
    //or
    decltype(foo()) f3 = foo();

    return 0;
}
