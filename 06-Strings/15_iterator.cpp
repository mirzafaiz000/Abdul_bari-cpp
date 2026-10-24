#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="Today";
    string::iterator i;     //string::reverse_iterator                          
    for(i=str.begin();i!=str.end();i++)     //str.rbegin();str.rend()               //for(int i=0;str[i]!='\0';i++)
    {                                                                               //cout<<str[i]
        cout<<*i<<endl;
    }
    return 0;
}