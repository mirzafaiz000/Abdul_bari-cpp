#include<iostream>
using namespace std;

int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a=10,b=15,c;
    c=add(a,b);
    cout<<"The addition of the two numbers is = "<<c<<endl;
    return 0;
}