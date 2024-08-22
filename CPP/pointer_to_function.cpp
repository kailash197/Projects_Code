#include<iostream>
using namespace std;

int max(int x, int y){
    return x>y?x:y;
}
int min(int x, int y){
    return x<y?x:y;
}

int operate(int x, int y, int (*fp)(int, int)){
    return fp(x,y);
}

int main(){
    //declaration of a pointer to function
    int (*function_pointer)(int,int);
    //initialization of function pointer to a function
    function_pointer = max; // or function_pointer= &max; both are valid
    
    // function call using a pointer
    int max_result = (*function_pointer)(10,5);

    function_pointer =min;
    int min_result = (*function_pointer)(10,5);
    cout << "Results are Max: "<<max_result<<" and Min: "<<min_result<<endl;

    cout <<"Using operate: Max = "<<operate(10,5, max)<<" and Min = "<<operate(10,5, min)<<endl;

    return 0;
}
/*
Results are Max: 10 and Min: 5
Using operate: Max = 10 and Min = 5
*/