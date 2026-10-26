#include <iostream>
using namespace std;

int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
    return a;
    else if(b>=a && b>=c)
    return b;
    else
    return c;
}

int main()
{
    int x=10,y=30,z=20;
    int result=greatest(x,y,z);
    cout<<"Greatest among the three numbers is = "<<result<<endl;
    return 0;
}