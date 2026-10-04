#include <iostream>
using namespace std;
int main ()
{
    int m,n;
    cout<<"Enter the values of m and n respectively : ";
    cin>>m>>n;
    while(n!=m)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    cout<<"GCD : "<<m<<endl;
    return 0;
}