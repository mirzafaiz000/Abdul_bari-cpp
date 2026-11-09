#include <iostream>
using namespace std;

namespace first
{
    void display()
    {
        cout<<"First"<<endl;
    }
};

namespace second
{
    void display()
    {
        cout<<"Second"<<endl;
    }
};

using namespace first;
int main()
{
    display();
    second::display();

    return 0;
}