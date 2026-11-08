#include <iostream>
using namespace std;

class Outer
{
public:
    void display()
    {
        cout<<"Display of Outer"<<endl;
    }
    class Inner
    {
    public:
        void show()
        {
            cout<<"Display of Inner"<<endl;
        }
    };
};

int main()
{
    Outer o;
    o.display();
    Outer::Inner i;
    i.show();

    return 0;
}