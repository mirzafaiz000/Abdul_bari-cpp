 #include <iostream>
 #include <cstring>
 using namespace std;
 int main()
 {
    char s1[50]="Good ";
    char s2[50]="Morning Sir";
    strncat(s1,s2,7);       //strcat(s1,s2)
    cout<<s1<<endl;
    return 0;
 }