#include <iostream>

using namespace std;

class Parent
{
    public:
    void display(){
        cout<<"Display Parent"<<endl;
    }

    virtual void who(){
        cout<<"DAD"<<endl;
    }
};

class Child: public Parent
{
    public:
    void display(){
        cout<<"Display Child"<<endl;
    }

    void who(){
        cout<<"SON"<<endl;
    }
    
};

int main()
{
    Child n;
    n.display();
    n.Parent::display();

    Parent* p = new Child();
    p->display();

    p->who();
    return 0;
}