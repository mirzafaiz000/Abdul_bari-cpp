#include <iostream>
using namespace std;

class parent final                  //stop inheritance
{
	virtual void show() final       //stop function overriding
	{

    }
};
class child:parent
{
	void show()
	{

    }
};