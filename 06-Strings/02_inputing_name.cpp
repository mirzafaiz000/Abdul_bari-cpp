#include <iostream>
using namespace std;
int main()
{
    char s[50];
    char S[50];
    cout<<"Enter your name : ";
    cin.get(s,50);
    cout<<s<<endl;
    cin.ignore();
    cout<<"Enter your name again : ";
    cin.get(S,50);
    cout<<S<<endl;
    
    return 0;
}