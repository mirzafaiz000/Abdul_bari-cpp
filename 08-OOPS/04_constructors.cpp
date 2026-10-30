#include <iostream>
using namespace std;
class Rectangle
{
private:

    int length;
    int breadth;

public:

    /*Rectangle()
    {
        length=1;
        breadth=1;
    }*/

    Rectangle(int l=1,int b=1)
    {
        set_length(l);
        set_breadth(b);
    }

    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

    void set_length(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else    
        {
            length=0;
            cout<<"length cannot be negative"<<endl;
        }
    }

    void set_breadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            breadth=0;
            cout<<"breadth cannot be negative"<<endl;
        }
    }

    int get_length()
    {
        return length;
    }

    int get_breadth()
    {
        return breadth;
    }

    int area()
    {
        return(length*breadth);
    }

    int perimeter()
    {
        return(2*(length+breadth));
    }
};

int main()
{
    Rectangle r;
    //Rectangle R(r);
    //r.set_length(10);
    //r.set_breadth(5);
    cout<<r.get_length()<<endl;
    cout<<r.get_breadth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}