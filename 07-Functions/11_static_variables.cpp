#include <iostream>
using namespace std;

int fun()
{
    static int v=0;
    int a=5;
    v++;
    cout<<a<<" "<<v<<endl;
    return 0;
}

int main()
{
    fun();
    fun();
    fun();
    
    return 0;
}