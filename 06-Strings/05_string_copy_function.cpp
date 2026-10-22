 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    char s1[50]="Good ";
    char s2[50]="";
    strcpy(s2,s1);       //strncpy(s2,s1,2)
    cout<<s2<<endl;
    return 0;
 }