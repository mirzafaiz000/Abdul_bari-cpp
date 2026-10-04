#include <iostream>
using namespace std;
int main()
{
    int rev=0,r,n;
    cout<<"Enter a number : ";
    cin>>n;
    do
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    while(n!=0);
    cout<<rev<<endl;
    return 0;
}