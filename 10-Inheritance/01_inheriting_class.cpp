#include <iostream>
using namespace std;

class Parent
{
public:
    int a;
    void display()
    {
        cout<<"Display from parent "<<a<<endl;
    }
};

class Derived:public Parent
{
public:
    int b;
    void show()
    {
        cout<<"Display from derived "<<b<<endl;
    }
};

int main()
{
    Derived d;
    d.a=100;
    d.b=10;
    d.display();
    d.show();
    return 0;
}