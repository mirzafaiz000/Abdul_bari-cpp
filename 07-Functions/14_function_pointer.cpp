#include <iostream>
using namespace std;

/*
int display()
{
    cout<<"Hello"<<endl;
    return 0;   
}

int main ()
{
    int (*fp)();
    fp=display;
    (*fp)();
    return 0;
}
*/

int max(int x,int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x<y?x:y;
}

int main ()
{
    int (*fp)(int,int);
    fp=max;
    (*fp)(10,5);
    fp=min;
    (*fp)(10,5);
    return 0;
}