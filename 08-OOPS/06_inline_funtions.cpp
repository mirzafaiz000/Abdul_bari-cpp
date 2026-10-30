#include <iostream>
using namespace std;

class Test
{
public:

    void fun1()
    {
        cout<<"Inline"<<endl;
    }

    inline void fun2();
};

void Test::fun2()
{
    cout<<"non-inline"<<endl; 
}

int main()
{
    Test t;
    t.fun1();
    t.fun2();
    return 0;
}