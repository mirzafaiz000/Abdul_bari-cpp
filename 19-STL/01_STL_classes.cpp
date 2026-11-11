#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v={10,20,30};
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    for(int x:v)
        cout<<x<<endl;
    return 0;
}