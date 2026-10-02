/*
#include <iostream>
int main()
{
    std::cout<<"Hello World\n";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 Numbers : "; 
    cin>>a>>b;
    c=a+b;
    cout<<"Addition is : "<<c<<"\n";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Hello Mr. "<<name<<"\n";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the value of n : ";
    cin>>n;
    sum=n*(n+1)/2;
    cout<<"The sum of the first "<<n<<" natural numbers is : "<<sum<<"\n";
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int a=11, b=7, c;
    c = a & b;
    cout << c << endl;

    int d=11, e=7, f;
    f = d | e;
    cout << f << endl;

    int g=11, h=7, i;
    i = g ^ h;
    cout << i << endl;

    char j=5, k;
    k = j << 1;             // Left Shift
    cout << (int)k << endl;

    char l=20, m;
    m = l >> 1;             // Right Shift
    cout << (int)m << endl;

    char x=5, y;
    y = ~x;                 // Bitwise NOT
    cout << (int)y << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    float Radius,Area;
    cout<<"Enter the radius of the circle : ";
    cin>>Radius;
    Area=float(22.0f/7*Radius*Radius);
    cout<<"The area of the circle is :"<<Area<<endl;
    return 0;
}
*/

/*
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
*/

/*
#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter 2 numbers x and y respectively : ";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"The max value is : "<<x<<endl;
    }
    else
    {
        cout<<"The max value is : "<<y<<endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, discriminant;
    cout << "Enter the values of a, b, c : ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << "Roots are : " << -b / (2 * a) << " and " << -b / (2 * a) << endl;
    }
    else if (discriminant > 0)
    {
        d = sqrt(discriminant);
        cout << "Roots are real and unequal" << endl;
        cout << "Roots are : " << (-b + d) / (2 * a) << " and " << (-b - d) / (2 * a) << endl;
    }
    else
    {
        cout << "Roots are imaginary and unequal" << endl;
    }

    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    float bill_amount,final_amount;
    cout<<"Enter the bill amount :";
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
