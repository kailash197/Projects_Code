#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &ref = a; // a is now assigned new name called ref

    cout << a << endl; // prints 10
    ref++;
    cout << a<< endl; // prints 11

    cout << sizeof(int);
    return 0;
}