#include <iostream>
#include <array>

using namespace std;

int main(){
    int testArray[2][3] = {{2,5,4},{1,3,7}};
    int rows = sizeof(testArray)/sizeof(testArray[0]);
    int cols = sizeof(testArray[0])/sizeof(testArray[0][0]);

    // print 

    for(int row=0; row<rows; row++){
        for(int col=0; col<cols; col++){
            cout<<testArray[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}