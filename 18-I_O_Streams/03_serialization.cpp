#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
public:
    Student(string n="",int r=0,string b=" ")
    {
        name=n;
        roll=r;
        branch=b;
    }
    friend ofstream & operator<<(ofstream &f1,Student &s1);
    friend ifstream & operator>>(ifstream &f2,Student &s2);
};

ofstream & operator<<(ofstream &f1,Student &s1)
{
    f1<<s1.name<<endl;
    f1<<s1.roll<<endl;
    f1<<s1.branch<<endl;
    return f1;
}

ifstream & operator>>(ifstream &f2,Student &s2)
{
    f2>>s2.name;
    f2>>s2.roll;
    f2>>s2.branch;
    return f2;
}

int main()
{
    Student s1("Messi",10,"CSE");
    ofstream outfile("Messi.txt");
    outfile<<s1;
    outfile.close();

    Student s2;
    ifstream infile("Messi.txt");
    infile>>s2;
    infile.close();

    cout<<"---Data Read From File---"<<endl;
    cout<<"Name = "<<s2.name<<endl;
    cout<<"Roll = "<<s2.roll<<endl;
    cout<<"Branch = "<<s2.branch<<endl;

    return 0;
}