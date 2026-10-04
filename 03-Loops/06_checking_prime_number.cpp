#include <iostream>
using namespace std;
int main()
{
    int a=0,n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a+=1;
        }
    }
    if(a==2)
    cout<<"The given number is a prime number"<<endl;
    else
    cout<<"The given number is not a prime number"<<endl;
    return 0;
}