#include <iostream>
#include <array>

using namespace std;

void printArray(const auto& dataArray){
    cout << "{";
    size_t size = dataArray.size();
    for( auto i = 0; i < size-1; i++){
        cout<<dataArray.at(i)<<", ";
    }
    cout<<dataArray.at(size-1)<<"}"<<endl;
}

int main() {
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};
    // native arrays
    int a[3] = {1,2,3};
    char b[] = {'a','b'};
    int c[5] {1,2,3,4,5};
    // not allowed to assign whole array, use
    //int d[5]; 
    //d={1,2,3,4,0}; 

    myArray = {2,4,6,8}; // last element is auto-assign 0 by default
    

    // Get the number of elements in the array
    std::size_t arraySize = myArray.size();
    
    //size of array 
    std::cout << "The size of the std::array is: " << arraySize << std::endl;

    std::cout <<"Using int type: " ;
    for (int i : myArray) { std::cout <<i <<"  "; }

    std::cout <<std::endl <<"Using auto: " ;
    for (auto i : myArray) { std::cout <<i <<"  "; }

    std::cout <<std::endl<<"Using auto reference: " ;
    for (auto& i : myArray) { std::cout <<i <<"  "; }

    std::cout <<std::endl<<"Using const auto reference: " ;
    for (const auto& i : myArray) { std::cout <<i <<"  "; }

    //comparison and swapping 
    std::array<int, 5> array2 = {5, 4, 3, 2, 1};
    bool areEqual = (myArray == array2);
    if (areEqual) { cout<<"Equal arrays"<<endl; } else { cout<<"Not equal arrays"<<endl; }

    //swap
    cout << endl<<"Before swapping: "<< endl;
    cout << "First array ";
    printArray(myArray);
    cout << "Second array ";
    printArray(array2);
    myArray.swap(array2);
    cout << "After swapping: "<< endl;
    cout << "First array ";
    printArray(myArray);
    cout << "Second array ";
    printArray(array2);

    // reference to data
    int* data = myArray.data();
    cout << "sizeof : "<<sizeof(data)<<endl;
    cout << "second element:  " << *(data+1)<< "\tsame as: " << myArray.at(1);

    // increment all values by 1
    for (auto& val: myArray){
        ++val;
    }
    cout << "\nPost increment: ";
    printArray(myArray);
    return 0;
}
