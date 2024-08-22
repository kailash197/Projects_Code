#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    
    printf("%d\n", a); // prints value of a which is 10
    printf("%d\n", p); // prints the value of p which is some address
    printf("%d", *p); //deferencing: prints the value at the address, getting the value at the address

    int *ptr;
    ptr = (int *) malloc(5*sizeof(int)); // malloc returns void pointer so type cast to int pointer
    int *pq = new int[6]; // C++ way to create a pointer to int array of size 5
    printf("%d", *pq);
    
    return 0;
}
