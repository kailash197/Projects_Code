#include <iostream>
#include <sstream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        string toString() const;
        ~Rectangle();
};

int main() {
    Rectangle r1(10,10);
    cout<<r1.toString()<<endl;
    cout<<"Area "<<r1.area()<<endl;
    if(r1.isSquare()) { cout<<"Yes, the rectangle is a square."<<endl; }
}

Rectangle::Rectangle() {
    length=1;
    breadth=1;
}

Rectangle::Rectangle(int l,int b) {
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l) {length=l;}
void Rectangle::setBreadth(int b){breadth=b;}
int Rectangle::area(){return length*breadth;}
int Rectangle::perimeter(){return 2*(length+breadth);}
bool Rectangle::isSquare(){return length==breadth;}
string Rectangle::toString() const {
    std::stringstream ss;
    ss << "Rectangle [Length : " << breadth << ", Breadth : " << length << "]";
    return ss.str();
}
Rectangle::~Rectangle(){cout<<"Rectangle Destroyed";}

/*
Rectangle [Length : 10, Breadth : 10]
Area 100
Yes, the rectangle is a square.
Rectangle Destroyed
*/