#include <iostream>
using namespace std;
int main()

{
    std::cout <<"Hello, World!"<< endl;;

    int myArray[3] = {2,3};
    std::cout << myArray[0] <<myArray[1] <<myArray[2] << endl ;
    unsigned int arraySize = std::size(myArray) ;
    cout << arraySize << endl;
    unsigned int arraySizeOld = sizeof(myArray)/sizeof(myArray[0]);
    cout << arraySizeOld<<endl;
} 