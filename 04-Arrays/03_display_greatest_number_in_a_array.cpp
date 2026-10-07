#include <iostream>
using namespace std;
int main()
{
    int i,A[5]={45,64,75,23,91};
    int max=A[0];
    for(i=0;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"Maximum element in the array is : "<<max<<endl;
    return 0;
}