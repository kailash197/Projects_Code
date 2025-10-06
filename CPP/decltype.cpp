#include <iostream>
using namespace std;

/*decltype:
- takes an expression as argument and computes the type of that expression
- doesn't strip away const and reference as auto
- powerful in the context of templates
*/

const std::string message = "hello, test";
const std::string& foo(){
    return message;
}

int main() {
    // f1 type is std::string as auto strips both const and ref thus a copy is made.
    auto f1 = foo(); 

    // for const std::string&, if you dont want a copy!
    const auto& f2 = foo();
    //or
    decltype(foo()) f3 = foo();

    return 0;
}


