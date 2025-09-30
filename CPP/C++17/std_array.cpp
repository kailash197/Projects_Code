#include <iostream>
#include <array>

int main(){
    std::array<int, 5> arr = {1,2};
    std::cout << "size of array is " << arr.size() <<std::endl;
    for(auto& val: arr){
        std::cout << val << std::endl;
    }

    //update last element to 737
    arr[arr.size()-1] = 737;

    std::cout << "last element " << arr[arr.size()-1] <<std::endl;
    return 0;
}