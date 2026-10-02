#include <iostream>
using namespace std;
int main()
{
    float basic;
    float percent_allowances;
    float percent_deductions;
    float net_salary;

    cout<<"Enter your basic salary : ";
    cin>>basic;
    cout<<"Enter percent of Allowences : ";
    cin>>percent_allowances;
    cout<<"Enter percent of Deductions : ";
    cin>>percent_deductions;

    net_salary=basic+(basic*percent_allowances/100)-(basic*percent_deductions/100);
    cout<<"Net salary of the person = "<<net_salary<<endl;

    return 0;
}