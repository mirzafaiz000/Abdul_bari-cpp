#include <iostream>
using namespace std;
int main()
{
    int rev=0,r,n,a;
    cout<<"Enter a number : ";
    cin>>n;
    int trailingZeros = 0;
    while (n!=0 && n % 10 == 0)
    {
        trailingZeros++;
        n /= 10;
    }
    do
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    while(n!=0);
    do
    {
        a=rev%10;
        rev=rev/10;
        switch (a)
        {
            case 0: cout<<"Zero ";break;
            case 1: cout<<"One ";break;
            case 2: cout<<"Two ";break;
            case 3: cout<<"Three ";break;
            case 4: cout<<"Four ";break;
            case 5: cout<<"Five ";break;
            case 6: cout<<"Six ";break;
            case 7: cout<<"Seven ";break;
            case 8: cout<<"Eight ";break;
            case 9: cout<<"Nine ";break;
        }
    }
    while(rev!=0);
    for (int i = 0; i < trailingZeros; i++)
    {
        cout << "Zero ";
    }
    cout << endl;
    return 0;
}