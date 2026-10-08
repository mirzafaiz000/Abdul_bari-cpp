#include <iostream>
using namespace std;
int main()
{
    int l=0,h=9,mid,key,A[10]={7,10,23,33,46,54,67,72,84,91};
    cout<<"Enter the number u want to find : ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at index : "<<mid<<endl;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"Given element not found"<<endl;
    return 0;
}