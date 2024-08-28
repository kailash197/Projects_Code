#include <iostream>

using namespace std;


class Test {
    static int count;
    public:
        Test(){ 
            count++;
            cout<<"Test object created. Count: "<<count<<endl;             
        }
        ~Test(){ 
            count--;
            cout<<"Test destructor called. Count: "<<count<<endl; 
        }
};

int Test::count = 0;

class DerivedTest: public Test {
    public:
        DerivedTest() { cout<<"Derived object created. "<<endl; }
        ~DerivedTest() { cout<<"Derived destructor called."<<endl; }
};

int main(){
    Test* p = new Test();
    delete p; p = nullptr;
    cout<<endl;
    Test* p2 = new DerivedTest(); 
    delete p2; // only ~Test() is called becoz. of baseclass pointer. 
    // See virtual destructor to find how to make call to derived destructor.
    p2 = nullptr;
    
    return 0;
}
/*
Test object created. Count: 1
Test destructor called. Count: 0

Test object created. Count: 1
Derived object created. 
Test destructor called. Count: 0
*/