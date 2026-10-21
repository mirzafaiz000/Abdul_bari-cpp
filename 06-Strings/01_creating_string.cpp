#include <iostream>
using namespace std;
int main()
{
    char S[]="Hello";
    char s[10]="Hello";
    char A[6]="Hello";
    char a[]={'H','e','l','l','o','\0'};
    char B[]={'H','e','l','l','o','\0','o','g'};
    char b[]={72,101,108,108,111,0,80,65,96};
    char *P="Hello";
    string p="Hello";

    cout<<S<<endl;
    cout<<s<<endl;
    cout<<A<<endl;
    cout<<a<<endl;
    cout<<B<<endl;
    cout<<b<<endl;
    cout<<P<<endl;
    cout<<p<<endl;

    return 0;
}