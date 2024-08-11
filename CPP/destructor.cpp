#include <iostream>

using namespace std;

class Test
{
    private:
    int id;
    static int counter;
    public:
    Test(){
        cout<<"Constructor:  New test object created"<<endl;
        counter++;
        id = counter;
    }
    //Destructor
    ~Test(){
        cout<<"Destructor:  Test object deleted."<<endl<<endl;
    }
};


int Test::counter=0;



int main(){    Test *p = new Test();
    delete p; //delete calls destructor
    return 0;
}
