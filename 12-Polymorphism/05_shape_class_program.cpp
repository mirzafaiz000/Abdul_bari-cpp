#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
    virtual ~Shape() = default;
};

class Rectangle:public Shape
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle(int r=0)
    {
        radius=r;
    }
    float area()
    {
        return 22.0f/7*radius*radius;
    }
    float perimeter()
    {
        return 2*22.0f/7*radius;
    }
};

int main()
{
    Shape *p=new Rectangle(10,5);
    cout << "Rectangle Area: " << p->area() << endl;
    cout << "Rectangle Perimeter: " << p->perimeter() << endl;
    delete p;

    p=new Circle(7);
    cout << "Circle Area: " << p->area() << endl;
    cout << "Circle Perimeter: " << p->perimeter() << endl;
    delete p;

    return 0;
}