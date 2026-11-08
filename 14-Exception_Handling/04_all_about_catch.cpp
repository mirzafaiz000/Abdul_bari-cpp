#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Exception1:public exception
{
};

class Exception2:public Exception1
{
};

int main()
{
    try
    {
        throw Exception1();
    }
    catch(Exception2 e)
    {
        cout<<"Exception2 Catch"<<endl;
    }
    catch(Exception1 e)
    {
        cout<<"Exception1 Catch"<<endl;
    }
    catch(int e)
    {
        cout<<"int Catch"<<endl;
    }
    catch(string e)
    {
        cout<<"string Catch"<<endl;
    }
    catch(...)
    {
        cout<<"All Catch"<<endl;
    }
    return 0;
}