#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    static int addNo;
public:
    Student(string n)
    {
        name=n;
        addNo++;
        roll=addNo;
    }
    void display()
    {
        cout<<"Name = "<<name<<" & "<<"Roll = "<<roll<<endl;
    }
    static int getAddNo()
    {
        return addNo;
    }
};
int Student::addNo=0;

int main()
{
    Student s1("Faiz");
    Student s2("Neymar");
    Student s3("Ronaldo");
    Student s4("Messi");

    s1.display();
    s4.display();

    cout<<"Number of admissions = "<<Student::getAddNo()<<endl; 

    return 0;
}