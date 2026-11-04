#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Default of base"<<endl;
    }
    Base(int x)
    {
        cout<<"Default of base "<<x<<endl;
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Default of derived"<<endl;
    }
    Derived(int x)
    {
        cout<<"Default of derived "<<x<<endl;
    }
};

int main()
{
    Derived d;

    return 0;
}