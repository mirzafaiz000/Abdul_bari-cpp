 #include <iostream>
 using namespace std;
 int main()
 {
    int A[10],n=10,key;
    cout<<"Enter the numbers u want in array : ";
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the number u want to find : ";
    cin>>key;
    for (int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            cout<<"The index of "<<key<<" is : "<<i<<" ."<<endl;
            return 0;
        }
    }
    cout<<"The index of "<<key<<" is not found in the array ."<<endl;
    return 0;
 }