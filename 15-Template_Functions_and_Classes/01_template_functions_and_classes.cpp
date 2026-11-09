#include <iostream>
using namespace std;

class StackUnderFlow
{
};
class StackOverFlow
{
};

template <class T>
class Stack
{
private:
    T *stk;
    int top=-1;
    int size;
public:
    Stack(int s)
    {
        size=s;
        stk=new T[size];
    }
    void push(T x);
    T pop();
    ~Stack()
    {
        delete[] stk;
    }
};

template <class T>
void Stack<T>::push(T x)
    {
        if(top==size-1)
            throw StackOverFlow();
        top++;
        stk[top]=x;
    }

template <class T>
T Stack<T>::pop()
    {
        if(top==-1)
            throw StackUnderFlow();
        return stk[top--];
    }

int main()
{
    try
    {
        Stack<int> s(5);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
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