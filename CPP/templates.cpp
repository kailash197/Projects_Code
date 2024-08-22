#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
    T a;
    T b;

    public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template<class T>
T Arithmetic<T>::add()
{
    return a+b;
}
template<class T>
T Arithmetic<T>::sub()
{
    return a-b;
}

int main()
{
    Arithmetic<int> x(10, 5);
    cout << "SUM: " << x.add() << endl;

    Arithmetic<float> y(1.1, 3.3);
    cout << "SUM of floats: "<<y.add()<<endl;
}
// class Arithmetic
// {
//     private:
//     int a;
//     int b;

//     public:
//     Arithmetic(int a, int b);
//     int add();
//     int sub();
// };

// Arithmetic::Arithmetic(int a, int b)
// {
//     this->a = a;
//     this->b = b;
// }

// int Arithmetic::add()
// {
//     return a+b;
// }
// int Arithmetic::sub()
// {
//     return a-b;
// }

// int main()
// {
//     Arithmetic a(10, 5);
//     cout << "SUM: " << a.add() << endl;
// }