#include <iostream>
#include <string> // for std::stoi()

using namespace std;


int main(int argc, char** argv){
    int value;
    if (argc > 1){
        value = std::stoi(argv[1]);
        /*
        The error with std::stoi(*argv[1]) occurs because *argv[1] is a char, 
        but std::stoi expects a std::string (or a C-style string, which is char*). 
        */  
    } else {
        return 1;
    }

    switch (value)
    {
    case 1:
        cout<<"value is 1"<< endl;
        break;
    case 2:
        cout << "value is 2"<< endl;
    case 3:
        cout << "value is 3"<< endl;
        break;
    case 4:
        cout << "value is 4"<< endl;    
    case 5: 
        cout << "value is 5"<< endl;
    
    default:
        cout << "The value is not any of 1, 2, 3, 4, or 5"<< endl;
        break;
    }   

    return 0;
}