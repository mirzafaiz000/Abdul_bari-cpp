#include <iostream>
using namespace std;

int max(int a=0,int b=0,int c=0)        //U have to give default from right hand side without skipping in between while going left hand side
{
    return a>=b && a>=c ? a:b>c ? b:c;
}
int main()
{
    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,20)<<endl;
    cout<<max(10,20,30)<<endl;
    return 0;
}