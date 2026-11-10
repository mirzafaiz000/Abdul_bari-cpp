#include <iostream>
using namespace std;

class Test
{
private:
    int *p;
public:
    Test()
    {
        p=new int[10];
        cout<<"Test displayed"<<endl;
    }
    ~Test()
    {
        delete[] p;
        cout<<"Test destroyed"<<endl;
    }
};

void fun()
{
    Test t;
}

int main()
{
    fun();

    return 0;
}