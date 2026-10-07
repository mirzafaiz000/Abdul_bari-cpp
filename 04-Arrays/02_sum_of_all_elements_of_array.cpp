#include <iostream>
using namespace std;
int main()
{
    int i=0,sum=0,A[7]={80,40,60,50,100,10,10};
    for(auto i:A)
    {
        sum+=i;
    }
    cout<<"The sum of all the elements of the array is : "<<sum<<endl;
    return 0;
}