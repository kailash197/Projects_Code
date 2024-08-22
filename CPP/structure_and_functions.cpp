#include <iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->breadth = b;
    r->length = l;
}

int area(struct Rectangle r)
{
    return (r.breadth * r.length);
}

void change_length(struct Rectangle *r, int l)
{
    r->length = l;
}

int main(){

    struct Rectangle r;
    initialize(&r, 10, 5);
    cout << "Area: "<<area(r)<<endl;

    change_length(&r, 4);
    cout << "Area: "<<area(r)<<endl;
    return 0;

}