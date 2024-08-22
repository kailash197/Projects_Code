#include <iostream>
#include <stdlib.h>
using namespace std;


struct Rectangle 
{
    int length;
    int breadth;
};

int area_by_value(struct Rectangle rect)
{
    rect.breadth++;
    return rect.breadth * rect.length;
}

int area_by_reference(struct Rectangle &rect1)
{
    rect1.breadth++;
    return rect1.breadth * rect1.length;
}

int area_by_address(struct Rectangle *rect2)
{
    // rect2->breadth++; // this can be replaced by its equivalent below.
    (*rect2).breadth++;
    return (*rect2).breadth * (*rect2).length;
}

struct Test 
{
    int A[5];
    int n;
};

void fun(struct Test eg1)
{
    cout<<eg1.A[0]<<endl;
}

int main()
{
    struct Rectangle r = {10, 5};
    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl;
    std::cout << "Area: " << area_by_value(r) << std::endl;
    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl<<endl;


    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl;
    std::cout << "Area: " << area_by_reference(r) << std::endl;
    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl<<endl;
    

    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl;
    std::cout << "Area: " << area_by_address(&r) << std::endl;
    cout << "Length: "<< r.length << " Breadth: "<<r.breadth<<endl<<endl;

    // test structure pass array by value.
    struct Test t = {{11,22,33,44,55}, 66};
    fun(t);
    return 0;
}
/* Output
Length: 10 Breadth: 5
Area: 60
Length: 10 Breadth: 5

Length: 10 Breadth: 5
Area: 60
Length: 10 Breadth: 6

Length: 10 Breadth: 6
Area: 70
Length: 10 Breadth: 7

11
*/