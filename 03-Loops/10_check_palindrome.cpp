#include <iostream>
using namespace std;
int main()
{
    int rev=0,r,n,m;
    cout<<"Enter a number : ";
    cin>>n;
    m=n;
    do
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    while(n!=0);
    if(m==rev) cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
    return 0;
}