#include <iostream>
using namespace std;
int main()
{
    int f=1,n,i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"Factorial of "<<n<<" = "<<f<<endl;
    return 0;
}