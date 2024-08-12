#include <iostream>
#include <array>
#include <string>

using namespace std;

auto search(const auto& array, auto key){
    size_t size= array.size();
    int left = 0;
    int right = size;

    while (left <= right){
        auto mid = int((left +right)/2);
        if (key == array.at(mid)) { return mid; }
        if (key > array.at(mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;

}

int main(){

    array<int, 5> testArray = {1,4,5,6,9};
    for (int i =0; i < testArray.size(); i++){
        cout<<search(testArray, testArray.at(i));
    }

    return 0;

}