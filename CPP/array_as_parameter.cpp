#include <iostream>
#include <stdlib.h>

void fun(int A[], int n) 
{
    A[0] = 25;
};

int * fun1(int n)
{
    int *p;
    p = (int*) malloc(n*sizeof(int));
    return(p);
}
int main()
{
    int A[5] = {2,4,6,8,10};
    fun(A,5);
    for (int i = 0; i<5; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
    int *B;
    B = fun1(5);
    for (int i = 0; i<5; i++)
    {
        std::cout << B[i] << " ";
    }
    
    return 0;
}
/* Output
25 4 6 8 10 
0 0 0 0 0 
*/