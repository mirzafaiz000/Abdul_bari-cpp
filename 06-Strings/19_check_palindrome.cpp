#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="MADAM";
    string str2="";
    for(auto i=str.rbegin();i!=str.rend();i++)
    {
        str2+=*i;
    }
    cout<<str2<<endl;
    int a=str.compare(str2);
    if(a==0)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not palindrome"<<endl;

    return 0;
}