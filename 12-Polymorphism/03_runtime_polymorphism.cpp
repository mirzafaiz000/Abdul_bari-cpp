#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start()
    {
        cout<<"Starting car"<<endl;
    }
};

class Innova:public Car
{
public:
    void start()
    {
        cout<<"Starting Innova"<<endl;
    }
};

class Swift:public Car
{
public:
    void start()
    {
        cout<<"Starting Swift"<<endl;
    }
};

int main()
{
    Car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}