#include <iostream>
#include <memory>

using namespace std;

class Rectangle
{
    int length=10;
    int breadth=5;
public:
    Rectangle (){}

    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
    int area(){ return length * breadth; }

};

int main()
{
    Rectangle myobj;
    cout<<"Area of myobj: "<<myobj.area()<<endl;
    return 0;
}