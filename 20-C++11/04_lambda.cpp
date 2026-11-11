#include <iostream>
using namespace std;
    
int main()
{
    [](){cout<<"Hello"<<endl;}();

	[](int x,int y){cout<<"Sum is = "<<x+y<<endl;}(10,30);

    cout<<([](int x,int y){return x+y;}(10,30))<<endl;

    int a=[](int x,int y){return x+y;}(10,30);
    cout<<"a = "<<a<<endl;

    int b=10;
    [b](){cout<<b<<endl;}();

    auto f=[b](){cout<<b<<endl;};   //&a=a
    f();

    return 0;
}