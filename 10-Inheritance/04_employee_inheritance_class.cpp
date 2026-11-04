#include <iostream>
#include <string>  //
using namespace std;

class Employee
{
private:
    string name;
    int eid;
public:
    Employee(string name="",int eid=0) // //
    {
        this -> name=name;
        this -> eid=eid;
    }
    int get_eid() {return eid;}
    string get_name() {return name;}
};

class FulltimeEmployee:public Employee    //
{
private:
    float salary;
public:
    FulltimeEmployee(string name="",int eid=0,float salary=0.0):Employee(name,eid)    // // //
    {
        this -> salary=salary;
    }
    float get_salary() {return salary;} //
};

class ParttimeEmployee:public Employee
{
private:
    float wage;
public:
    ParttimeEmployee(string name="",int eid=0,float wage=0.0):Employee(name,eid)
    {
        this -> wage=wage;
    }
    float get_wage() {return wage;}
};

int main()
{
    FulltimeEmployee F("Faiz",1,2000);
    ParttimeEmployee P("Messi",2,300);

    cout << "Fulltime Employee Name: " << F.get_name() 
         << ", ID: " << F.get_eid() 
         << ", Salary: " << F.get_salary() << endl;

    cout << "Parttime Employee Name: " << P.get_name() 
         << ", ID: " << P.get_eid() 
         << ", Wage: " << P.get_wage() << endl;
     
    return 0;
}