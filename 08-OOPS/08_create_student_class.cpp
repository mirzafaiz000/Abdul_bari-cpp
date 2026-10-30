#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int phy_marks;
    int chem_marks;
    int math_marks;

public:
    student (int r,string n,int p,int c,int m)
    {
        roll=r;
        name=n;
        phy_marks=p;
        chem_marks=c;
        math_marks=m;
    }

    int total()
    {
        return phy_marks+chem_marks+math_marks;
    }

    char grade()
    {
        int avg = total() / 3;
        if (avg >= 60)
        {
            return 'A'; 
        }
        else if (avg <= 40)
        {
            return 'C';
        }
        else
        {
            return 'B';
        }
    }
};

int main()
{
    int r,p,c,m;
    string n;
    cout<<"Enter roll number of student = ";
    cin>>r;
    cout<<"Enter name of student = ";
    cin>>n;
    cout<<"Enter physics marks of student = ";
    cin>>p;
    cout<<"Enter chemistry marks of student = ";
    cin>>c;
    cout<<"Enter maths marks of student = ";
    cin>>m;
    student s(r,n,p,c,m);
    cout<<"Total marks = "<<s.total()<<endl;
    cout<<"Grade = "<<s.grade()<<endl;
    return 0;
}