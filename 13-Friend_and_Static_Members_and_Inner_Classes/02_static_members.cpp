#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test()
    {
        a=10;
        count++;
    }

    int getCount()
    {
        return count;
    }
};
int Test::count=0;

int main()
{
    Test t1,t2;
    cout<<t1.getCount()<<endl;
    return 0;
}