#include <iostream>

using namespace std;

namespace First {
    void fun() { cout<<"Inside first function"<<endl; }
}

namespace Second {
    void fun() { cout<<"Inside second function"<<endl; }
}

using namespace First;
int main() {
    fun();//Inside first function 
		// same as First::fun()
    Second::fun(); //Inside second function
}
/*
Inside first function
Inside second function
*/