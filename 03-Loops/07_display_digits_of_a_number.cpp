#include <iostream>
using namespace std;
int main()
{
    int r,n;
    cout<<"Enter a number : ";
    cin>>n;
    do
    {
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
    while(n!=0);
    return 0;
}