#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(10,"Faiz"));
    m.insert(pair<int,string>(30,"Messi"));
    m.insert(pair<int,string>(19,"Yamal"));

    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    map<int,string>::iterator itr1;
    itr1=m.find(10);
    cout<<"Value found is = ";
    cout<<itr1->first<<" "<<itr1->second<<endl;

    return 0;
}