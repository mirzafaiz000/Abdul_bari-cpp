#include <iostream>
using namespace std;

int g=5;

int fun()
{
    int g=10;
    {
        int g=0;
        g++;
        cout<<g<<endl;
        cout<<::g<<endl;        //::g overwrites local value for global value
    }
    cout<<g<<endl;
    return 0;
}

int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    return 0;
}