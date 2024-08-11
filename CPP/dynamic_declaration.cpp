/*
- Dynamic Declaration:
    
    If a variable is declared in main function, it is created in stack of main function and 
    scope is till the main function is completed.
    If possible, a variable can be declared inside if block it is again created in the stack memory of main function but 
    as soon as the if block goes out of scope, the variable is deleted and memory is freed.
*/

#include <iostream>

using namespace std;


int main(){
    
    int a=5;
    bool condition = true;

    if (condition) {
        cout<< "A: "<<a<<endl;
    }
    cout<< "A: "<<a<<endl;

    if (condition) {
        int b = 2;
        cout<< "B: "<<b<<endl;
    }
    // cout<< "A: "<<b<<endl; Error: identifier b unidentified.


    return 0;
}