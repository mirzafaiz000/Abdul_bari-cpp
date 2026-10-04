#include <iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            sum+=i;
        }
    }
    cout<<"Sum = "<<sum<<endl;
    if(2*n==sum)
    {
        cout<<"The given number is a perfect number"<<endl;
    }
    else
    {
        cout<<"The given number is not a perfect number"<<endl;
    }
    return 0;
}