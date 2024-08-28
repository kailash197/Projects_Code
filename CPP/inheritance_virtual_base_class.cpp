#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructing A" << endl;
    }
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public virtual A {
public:
    B() {
        cout << "Constructing B" << endl;
    }
};

class C : public virtual A {
public:
    C() {
        cout << "Constructing C" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructing D" << endl;
    }
};

int main() {
    D obj;
    obj.show();  // Calls A::show() through the single shared instance
    return 0;
}
/*
Constructing A
Constructing B
Constructing C
Constructing D
Class A
*/