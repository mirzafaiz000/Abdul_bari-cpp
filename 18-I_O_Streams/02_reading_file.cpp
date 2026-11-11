#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("My.txt");   
    if(f.is_open()) cout<<"File is opened"<<endl;       //ifstream f;
    string name;                                        //f.open("My.txt")
    int roll;
    string branch;
    f>>name>>roll>>branch;
    f.close();
    cout<<"Name = "<<name<<endl;
    cout<<"Roll = "<<roll<<endl;
    cout<<"Branch = "<<branch<<endl;
    return 0;
}