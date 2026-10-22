 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    char s1[50]="Programming";
    if(strchr(s1,'r') != NULL)
    {
        cout<<strchr(s1,'r')<<endl;     //strrchr(s1,r)===> ramming
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
 }