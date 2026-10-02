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