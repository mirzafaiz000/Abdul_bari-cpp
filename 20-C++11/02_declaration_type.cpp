#include <iostream>
#include <typeinfo>
using namespace std;
    
int main()
{
    float y=90.5;
	decltype(y) z=12.3;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;

    return 0;
}