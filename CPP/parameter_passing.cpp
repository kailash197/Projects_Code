#include <iostream>
#include <stdlib.h>

void swap_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}
void swap_by_address(int * x, int * y)
{   
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_by_reference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
}
int main()
{
    int a, b;
    a = 10;
    b = 5;
    
    // Pass by value doesn't work with swap
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl;
    swap_by_value(a,b);
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl<<std::endl;

    // Pass by address; suitable for altering original parameters
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl;
    swap_by_address(&a,&b);
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl<<std::endl;

    // call by reference
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl;
    swap_by_reference(a,b);
    std::cout <<"a = "<<a<<" b = "<<b<<std::endl;

    return 0;
}

/**OUTPUT
a = 10 b = 5
a = 10 b = 5

a = 10 b = 5
a = 5 b = 10

a = 5 b = 10
a = 10 b = 10
*/