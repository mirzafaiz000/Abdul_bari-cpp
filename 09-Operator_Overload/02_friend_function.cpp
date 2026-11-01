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
    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;
}

int main()
{
    Complex c1(3,6),c2(5,6),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}