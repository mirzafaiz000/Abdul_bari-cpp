#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="faizbeg2007@gmail.com";
    int len=str.find('@');
    string str2=str.substr(0,len);
    cout<<str2<<endl;
    
    return 0;
}