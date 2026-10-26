#include<iostream>
using namespace std;

int pow(int x,int y)
{
    int p=1;
    for(int i=0;i<y;i++)
    {
        p*=x;
    }    
    return p;
}

int main()
{
    cout<<pow(2,5)<<endl;
    return 0;
}