#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="Hello";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(30);
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;
    s.clear();
    cout<<s<<endl;
    cout<<s.empty()<<endl;
    
    return 0;
}