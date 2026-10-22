 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    char s1[50]="Programming";
    char s2[50]="gram";
    if(strstr(s1,s2) != NULL)
    {
        cout<<strstr(s1,s2)<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
 }