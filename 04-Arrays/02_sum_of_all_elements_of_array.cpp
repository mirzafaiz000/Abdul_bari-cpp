#include <iostream>
using namespace std;
int main()
{
    int sum=0,A[7]={80,40,60,50,100,10,10};
    for(int i:A)
    {
        sum+=i;
    }
    cout<<"The sum of all the elements of the array is : "<<sum<<endl;
    return 0;
}