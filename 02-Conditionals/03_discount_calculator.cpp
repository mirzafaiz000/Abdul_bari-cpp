#include <iostream>
using namespace std;
int main()
{
    float bill_amount,final_amount;
    cout<<"Enter the bill amount : ";
    cin>>bill_amount;
    if(bill_amount>=500)
    {
        final_amount=bill_amount-(bill_amount/5);
        cout<<final_amount<<endl;
    }
    else if(bill_amount>=100 && bill_amount<500)
    {
        final_amount=bill_amount-(bill_amount/10);
        cout<<final_amount<<endl;
    }
    else
    {
        final_amount=bill_amount;
        cout<<final_amount<<endl;
    }
    return 0;
}