#include<iostream>

using namespace std;

int* create_array(size_t s){
   int* ptr = new int[s];
    for(int i = 0; i<s; i++){
        ptr [i] = i*5;
    }
   return ptr;
}

int main(){
    cout<<"Enter size of the array ";
    size_t length; cin >> length;

    int* myArray = create_array(length);
    for(int i = 0; i<length; i++){
        cout<< myArray[i] <<" " ;
    }
    cout <<endl;    
    return 0;
}
/* Output:
Enter size of the array 8
0 5 10 15 20 25 30 35 
*/