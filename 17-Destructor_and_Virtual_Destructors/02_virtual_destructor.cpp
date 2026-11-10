#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout<<"Base destructor"<<endl;
    }
};

class Derived:public Base
{
    ~Derived()
    {
        cout<<"Derived destructor"<<endl;
    }
};

void fun()
{
    Base *p=new Derived();
    delete p;
}

int main()
{
    fun();

    return 0;
}