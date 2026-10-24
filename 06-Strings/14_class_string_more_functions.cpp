#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s="Hello World";
    char str[10];
    s.copy(str,4);
    str[4]='\0';
    cout<<s<<endl<<str<<endl;

    cout<<s.find('e')<<endl;
    cout<<s.rfind('e')<<endl;

    cout<<s.find_first_of('l')<<endl;       //s.find_first_of('l',3)
    cout<<s.find_last_of('l')<<endl;        //s.find_last_of('l',3)

    cout<<s.substr(6,3)<<endl;

    string s1="hello",s2="world";
    cout<<s1.compare(s2)<<endl;

    cout<<s1<<endl<<s2<<endl;
    cout<<s1.at(4)<<endl;
    cout<<s1[4]<<endl;
    cout<<s1.front()<<endl;
    cout<<s1.back()<<endl;
    cout<<s1+s2<<endl;
    cout<<s1+" world"<<endl;
    s1=s2;
    cout<<s1<<endl<<s2<<endl;
   
    return 0;
}