#include <iostream>
#include <vector>

void print_vect(const std::vector<int> arr){
    std::cout << "size of array is " << arr.size() <<std::endl;
    for(auto& val: arr){
        std::cout << val << std::endl;
    }
}

int main(){
    std::vector<int> arr = {1,2};
    print_vect(arr);


    //update last element to 737
    arr[arr.size()-1] = 737;
    std::cout << "last element " << arr[arr.size()-1] <<std::endl;

    //push some values
    arr.push_back(23);
    print_vect(arr);

    return 0;
}