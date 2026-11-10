#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("My.txt",ios::trunc);
    f<<"Hello"<<endl;
    f<<25<<endl;
    f<<"cs"<<endl;
    f.close();
    return 0;
}