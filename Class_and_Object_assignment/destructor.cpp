#include<iostream>
using namespace std;
class HelloWorld{
    public:
    HelloWorld()
    {
        cout<<"Constructor is called!!";
    }
    ~HelloWorld()
    {
        cout<<"\nDestructor is called!!"; 
    }
};
int main()
{
    HelloWorld obj;
}