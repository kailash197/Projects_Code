#include <iostream>

using namespace std;

class Stack
{
    private:
        int* stk;
        int top;
        int size;
    public:
        Stack(int sz)
        {
            size=sz;
            top=-1;
            stk = new int[size];
        }
        void push (int x);
        int pop();
        bool isEmpty();
};

bool Stack::isEmpty()
{
    return top<0;
}
void Stack::push(int value)
{ 
    if (top==size-1)
    {
        cout<<"Stack is full."<<endl;
        return;
    }
    top++;
    stk[top]=value;
}

int Stack::pop()
{
    int value = 0;
    if(top==-1){
        cout<<"Stack is empty."<<endl;
    }
    value = stk[top];
    top--;
    return value;
}

int main()
{
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(9);

    while (! s.isEmpty())
    {
        cout<<s.pop()<<endl;
    }
    cout<<endl<<endl;
    return 0;
}