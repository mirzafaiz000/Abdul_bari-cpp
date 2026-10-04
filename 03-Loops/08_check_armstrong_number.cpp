#include <iostream>
using namespace std;
int main()
{
    int a=0,r,n,m;
    cout<<"Enter a number : ";
    cin>>n;
    m=n;
    do
    {
        r=n%10;
        n=n/10;
        a+=r*r*r;
    }
    while(n!=0);
    if(a==m) cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    return 0;
}