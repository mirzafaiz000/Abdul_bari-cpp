#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char *s= new char[50];
    cout<<"Enter the string : ";
    cin.getline(s,50);
    cout<<"Length : "<<strlen(s)<<endl;
    delete[] s;
    return 0;
}