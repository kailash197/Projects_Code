#include <iostream>
#include <functional>
using namespace std;

int main() {
    // declaration and definition and call all together
    [](){cout<<"Hello lambdas..."<<endl<<endl;}();

    [](int a, int b){cout<<"The sum is: "<<a+b<<endl<<endl;}(7, 4);
 
    //give name to similar anonymous function
    auto sum = [](int a, int b){return a+b;};
    cout<<"The sum is: "<<sum(7,5)<<endl<<endl;

    std::function<int(int, int)> f = [](int a, int b){ return a + b; };
    //std::function<ReturnType(param1Type, param2Type)>
    // int f = [](int a, int b){ return a+b; }; this is error
    cout << f(2,3)<<endl<<endl;
    
    // Use auto 
    auto f2 = [](int a, int b) {return a+b;};    
    cout << f2(22,3)<<endl<<endl;

    // Lambda expression capturing x and y by value
    int x = 10;
    int y = 5;
    
    auto multiply = [x, y]() {
        return x * y;
    };

    // Using the lambda expression
    std::cout << "Product: " << multiply() << std::endl<<endl<<endl;

    // To capture, use and modify, pass by reference
    auto f3 = [&x, &y](){return (x++)*(y++);};
    cout << "Product: "<<f3()<<endl<<endl;
    cout<<"Value of x: "<< x<<" and y: "<< y<<endl<<endl;

    //Reference everything in the scope
    
    auto f4 = [&](){ cout<<"Value of x: "<< x<<" and y: "<< y<<endl<<endl; };
    f4();
    
    return 0;
}
