#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="Hello";
    cout<<s<<endl;
    cout<<s.append(" World")<<endl;
    cout<<s.insert(2,"ll")<<endl;       //s.insert(2,"ll",1)
    cout<<s.replace(2,4,"LL")<<endl;
    s.erase();
    cout<<s<<endl;
    string s1="apple",s2="banana";
    cout<<s1<<endl<<s2<<endl;
    s1.push_back('z');
    cout<<s1<<endl;
    s1.pop_back();
    cout<<s1<<endl;
    s1.swap(s2);
    cout<<s1<<endl<<s2<<endl;
    
    return 0;
}