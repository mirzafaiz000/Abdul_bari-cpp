#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int len;
    cout<<"Enter a string : ";
    getline(cin,str);
    len=str.length();
    cout<<"The length of the string entered is = "<<len<<endl;
    return 0;

    /*
    string str="Welcome";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"The length of the string you entered is = "<<count<<endl;
    return 0;
    */

    /*
    string::iterator i;
    int count=0;
    string str="Welcome";
    for(i=str.begin();i!=str.end() ;i++)
    {
        count++;
    }
    cout<<"The length of the string you entered is = "<<count<<endl;
    return 0;
    */

}