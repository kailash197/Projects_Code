#include <iostream>
#include <memory>  

using namespace std;

class Rectangle
{
    int length;
    int breadth;
public:
    Rectangle(int l, int b):length(l), breadth(b) {}
    int area(){ return length * breadth; }
    ~Rectangle(){ cout<<"Rectange object destroyed."<<endl; }
};

int main()
{
    // ######## UNIQUE POINTER
    unique_ptr<Rectangle> ptr(new Rectangle(4, 3));
    cout<<"Area using ptr1: "<<ptr->area()<<endl;

    // unique_ptr<Rectangle> ptr2 = ptr; // error: use of deleted function
    // two unique pointers can't point to the same object.
    
    unique_ptr<Rectangle> ptr2;
    // Transfer ownership
    ptr2=move(ptr);
    cout<<"Area using ptr2 after transfer of ownership: "<<ptr2->area()<<endl;

    // cout<<"Area: "<<ptr->area()<<endl; exception occurred as pointer is a null pointer

    /////// SHARED POINTER
    shared_ptr<Rectangle> ptr3 (new Rectangle(3, 6));
    cout<<"Area using ptr3 : "<<ptr3->area()<<endl;

    shared_ptr<Rectangle> ptr4 = ptr3;
    cout<<"Area using ptr4 : "<<ptr4->area()<<endl;
    cout<<"Use count:" <<ptr3.use_count()<<endl;
    /////// WEAK POINTER same as shared pointer but doesn't keep count
    return 0;
}