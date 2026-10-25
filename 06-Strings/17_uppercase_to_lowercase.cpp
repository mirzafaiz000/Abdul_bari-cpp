#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="WELcome";
    string::iterator i;
    for(i=str.begin();i!=str.end() ;i++)
    {
        if(*i>=65 && *i<=90)
        {
            *i=*i+32;
        }
    }
    cout<<"The lowercase of the string you entered is = "<<str<<endl;
    
    return 0;
}