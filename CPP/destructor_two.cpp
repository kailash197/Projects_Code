#include <iostream>
#include<fstream>

using namespace std;

class Test {
private:
    int *p;
    ifstream fis;
public:
    Test() { 
        p = new int[10]; 
        fis.open("example.txt");
        cout<<"Created"<<endl;
    }
    ~Test(){
        // Dynamically create objects are not automatically released, should explicitly be done.
        delete [] p; 
        fis.close();
        cout<<"Deleted"<<endl;
    }
};



int main(){    
    Test *p = new Test();
    Test t;
    //call to destructor for heap object is not automatic
    delete p; //delete calls destructor for *p

    // Destructor will be called automatically once obj t in stack goes out of scope
    return 0;
}
