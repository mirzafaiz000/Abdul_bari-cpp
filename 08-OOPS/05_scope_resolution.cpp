#include <iostream>
using namespace std;

class Rectangle                     //Perfect class
{
    private:

    int length;
    int breadth;

    public:

    Rectangle();                    //Constructors
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength();                //Accessors
    int getBreadth();
    void setLength(int l);          //Mutators
    void setBreadth(int b);
    int area();                     //Facilators
    int perimeter();
    bool isSquare();                //Enquiry
    ~Rectangle();                   //Destructor
};

int main()
{
    Rectangle r(10,10);
    cout<<r.area()<<endl;
    if(r.isSquare()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

// Default Constructor
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

// Parameterized Constructor
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

// Copy Constructor
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

// Mutator (Setter) for length
void Rectangle::setLength(int l)
{
    length = l;
}

// Mutator (Setter) for breadth
void Rectangle::setBreadth(int b)
{
    breadth = b;
}

// Facilitator: Area
int Rectangle::area()
{
    return length * breadth;
}

// Facilitator: Perimeter
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// Enquiry: isSquare
bool Rectangle::isSquare()
{
    return length == breadth;
}

// Destructor
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed" << endl;
}