#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex(int r=0, int i=0) {
            real=r;
            img=i;
        }
        
        void display(){cout<<real<<"+"<<img<<"i"<<endl; }
        
        // instead of add function like 
        // Complex add(Complex c2)
        // and use c2.add(c3)
        //use operator+ instead of add
        // and use c3 = c1+c2
        
        Complex operator+(Complex c1) {
            Complex temp;
            temp.real=real+c1.real;
            temp.img=img+c1.img;
            return temp;
        }
};
int main() {
    Complex c1(5,3),c2(10,5),c3;
    c3=c1+c2;
    c3.display();
}
/*
15+8i
*/
