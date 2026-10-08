#include <iostream>
using namespace std;
int main()
{
    int i,n;
    float num[100], sum=0.0, average;
    cout<<"Enter total number of elements in the matrix : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average = " << average<<endl;
    return 0;
}