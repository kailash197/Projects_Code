#include<iostream>
using namespace std;
class Rational
{
    private:
        int p;
        int q;
    public:
    Rational(int p=1,int q=1) {
        this->p=p;
        this->q=q;
    }
    Rational(Rational &r) {
        this->p=r.p;
        this->q=r.q;
    }
    int getP(){return p;}
    int getQ(){return q;}
    void setP(int p) { this->p=p;}
    void setQ(int q) { q=q;}
    Rational operator+(Rational r) {
        Rational t;
        t.p=this->p*r.q+this->q*r.p;
        t.q=this->q*r.q;
        return t;
    }
    
    friend ostream & operator<<(ostream &out,Rational &r) {
        out<<r.p<<"/"<<r.q;
        return out;
    }
};

int main() {
    Rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
}
/*
Sum of 3/4 and 2/5 is 23/20
*/