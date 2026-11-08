#include <iostream>
#include <exception>
using namespace std;

class MyException:public exception
{
};

int division(int x,int y) throw(MyException)
{
    if(y==0)
        throw MyException();
    return x/y;
}

int main()
{
    int x=10,y=0,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by 0 error"<<endl;
    }
    cout<<"Bye"<<endl;

    return 0;
}