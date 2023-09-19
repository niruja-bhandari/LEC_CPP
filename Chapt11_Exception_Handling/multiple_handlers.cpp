#include<iostream>
using namespace std;
#define MAX 2
class stack{
protected:
int s[MAX];
int top;
public:
class FULL
{};//exception class for FULL stack
class EMPTY
{};//exception class for EMPTY stack
stack()//constructor
{top=-1;}
void push(int x)
{
    if(top==MAX-1)
    throw FULL();
    else
    s[++top]=x;
}
int pop()
{
    if(top==-1)
    throw EMPTY();
    else
    return s[top--];
}
};
int main()
{
    stack s;
    try
    {
        s.push(11);
        s.push(22);
        s.push(33);
        //condition of throwing exception FULL
        cout<<"\nNumber Popped "<<s.pop();
        cout<<"\nNumber Popped "<<s.pop();
        cout<<"\nNumber Popped "<<s.pop();
        //condition of throwing exception EMPTY
    }
    catch (stack::FULL)
    {
        cout<<"\nException: stack is FULL"<<endl;
    }
    catch(stack::EMPTY)
    {
        cout<<"\nException: stack is EMPTY"<<endl;
    }
}