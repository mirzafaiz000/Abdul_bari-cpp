#include <iostream>
using namespace std;

void display(const int &x,const int &y)
{
    cout<<"Function "<<x<<" "<<y<<endl;
}

int main()
{
    int a=10,b=20;
    display(a,b);
    cout<<"Main "<<a<<" "<<b<<endl;

    return 0;
}