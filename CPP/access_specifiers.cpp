#include <iostream>

using namespace std;

class Parent {
    private:  
        int a;
    protected: 
        int b;
    public: 
        int c;
        void set(){ a=10; b=20; c=30; } // all private, protected, public accessible within class
        void display(){ cout<<endl<<"Parent: a: "<<a<<", b: "<<b<<", c: "<<c<<endl;}
};


class Derived: public Parent {
    public:
        void set(){b=200; c=300; } // private a is inaccessible, protected b and public c are accessible.
        void display(){ cout<<endl<<"child: a: not accessible "<<", b: "<<b<<", c: "<<c<<endl;} 
        //void display(){ cout<<endl<<"child: a: "<<a<<", b: "<<b<<", c: "<<c<<endl;} 
        //Error: member Parent::a is inaccessible
        
};

int main(){
    Parent p;
    p.display(); //  garbage values
    p.set();
    p.display();

    // p.a = 1000; Error: member Parent::a is inaccessible, private
    // p.b = 2000; Error: member Parent::b is inaccessible, protected
    p.c = 3000; // Parenct::c is accessible bcoz its public.
    p.display();

    Derived d;
    d.display();
    d.set();
    d.display();
    // d.a =100; same reason inaccessible
    // d.b=1000; same reason inaccessible
    d.c=3000;
    d.display();
    return 0;
}
/*
Parent: a: -593325880, b: 32609, c: -593326456

Parent: a: 10, b: 20, c: 30

Parent: a: 10, b: 20, c: 3000

child: a: not accessible , b: -593327808, c: 32609

child: a: not accessible , b: 200, c: 300

child: a: not accessible , b: 200, c: 3000
*/
