#include <iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"Enter a number : ";
    cin>>b;
    for (i=1;i<11;i++)
    {
        a=b*i;
        cout<<b<<"*"<<i<<"="<<a<<endl; 
    }
    return 0;
}