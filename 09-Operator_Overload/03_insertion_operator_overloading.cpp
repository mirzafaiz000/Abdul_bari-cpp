#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    friend ostream& operator<<(ostream &o,Complex &c);
};

ostream& operator<<(ostream &o,Complex &c)
{
    o<<c.real<<"+"<<c.imaginary<<"i";
    return o;
}

int main()
{
    Complex c1(5,5);
    cout<<c1<<endl;
    return 0;
}