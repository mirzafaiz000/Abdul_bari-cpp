#include <iostream>
using namespace std;

class StackUnderFlow
{
};
class StackOverFlow
{
};

class Stack
{
private:
    int *stk;
    int top=-1;
    int size;
public:
    Stack(int s)
    {
        size=s;
        stk=new int[size];
    }
    void push(int x)
    {
        if(top==size-1)
            throw StackOverFlow();
        top++;
        stk[top]=x;
    }
    int pop()
    {
        if(top==-1)
            throw StackUnderFlow();
        return stk[top--];
    }
    ~Stack()
    {
        delete[] stk;
    }
};

int main()
{
    try
    {
        Stack s(5);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        s.push(8);
    }
    catch(StackOverFlow e)
    {
        cout<<"Stack size is full"<<endl;
    }
    catch(StackUnderFlow e)
    {
        cout<<"Stack size is empty"<<endl;
    }
    catch(...)
    {
        cout<<"Stack"<<endl;
    }
    return 0;
}