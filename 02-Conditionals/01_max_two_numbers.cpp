#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter 2 numbers x and y respectively : ";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"The max value is : "<<x<<endl;
    }
    else
    {
        cout<<"The max value is : "<<y<<endl;
    }
    return 0;
}