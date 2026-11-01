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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }
   void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};

int main()
{
    Complex c1(5,6);
    Complex c2(6,5);
    Complex c3=c2+c1;
    c3.display();
    return 0;
}