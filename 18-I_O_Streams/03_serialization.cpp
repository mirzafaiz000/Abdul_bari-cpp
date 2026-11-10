#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &f,Student &s);
    friend ifstream & operator>>(ifstream &f,Student &s);
};

ifstream & operator>>(ifstream &f,Student &s)
{
    f>>s.name;
    f>>s.roll;
    f>>s.branch;
    return f;
}

ofstream & operator<<(ofstream &f,Student &s)
{
    f<<s.name<<endl;
    f<<s.roll<<endl;
    f<<s.branch<<endl;
    return f;
}

int main()
{
    Student s1;
    s1.name = "Faiz";
    s1.roll = 101;
    s1.branch = "CSE";

    ofstream outfile("Student.txt");
    outfile<<s1; 
    outfile.close();

    Student s2;
    ifstream infile("Student.txt");
    infile>>s2;

    cout << "--- Data Read from File ---" << endl;
    cout << "Name = " << s2.name << endl;
    cout << "Roll = " << s2.roll << endl;
    cout << "Branch = " << s2.branch << endl;

    infile.close();

    return 0;
}