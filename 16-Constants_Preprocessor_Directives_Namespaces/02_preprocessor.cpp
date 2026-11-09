#include <iostream>
using namespace std;


#define max(x,y) (x>y?x:y)
#define PI 3.1425
#define msg(x) #x

#ifndef PI
    #define PI 3
#endif

int main()
{
    cout<<max(3,PI)<<endl<<msg(Hello)<<endl;
    return 0;
}