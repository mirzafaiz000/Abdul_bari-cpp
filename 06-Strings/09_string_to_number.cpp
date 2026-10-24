 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    char s1[50]="256";
    char s2[50]="45.99";      
    long x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);
    cout<<x+1<<endl<<y+0.01<<endl;
    return 0;
 }