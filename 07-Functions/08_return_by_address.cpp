#include <iostream>
using namespace std;

int * fun(int size)
{
    int *p=new int[size];
    for(int i=0;i<size;i++)
        p[i]=i+1;
    return p;
}

int main()
{
    int size=5;
    int *ptr=fun(size);

    cout << "Elements in the heap array: ";
    for(int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr;
    return 0;
}