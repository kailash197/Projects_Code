#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:

    Rectangle(int l, int b)
    {
        breadth = b;
        length = l;
    }

    int area()
    {
        return (breadth * length);
    }

    void change_length(int l)
    {
        length = l;
    }
};

int main(){

    Rectangle r(10, 5);
    cout << "Area: "<<r.area()<<endl;

    r.change_length(4);
    cout << "Area: "<<r.area()<<endl;
    return 0;

}