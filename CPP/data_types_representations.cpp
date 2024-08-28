#include<iostream>
using namespace std;
int main()
{
char a='A', b=65, c=0x41, d=65.6;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

float f=123.56, g=123e2, h=123e-2 ;
cout<<f<<" "<<g<<" "<<h<<" "<<endl;

string i="Hello";
cout<<i<<endl;

int aa=10, bb=010, cc=0x10, dd(10), ff=(10), gg{10};
cout<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ff<<" "<<gg<<" "<<endl;

return 0;
}
/*
A A A A
123.56 12300 1.23 
Hello
10 8 16 10 10 10 
*/
