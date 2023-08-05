#include <iostream>
using namespace std;
class Parent{
    public:
    Parent(){};
    Parent(int x,int y)
    {
        cout<<x+y<<endl;
    }
    ~Parent()
    {
        cout<<"Parent destructor called"<<endl;
    }
};
class Child:public Parent{
    public:
    Child()
    {
    Parent b1(4,5);
    }
    ~Child()
    {
        cout<<"child destructor called"<<endl;
    }
}; 
int main(){
    Child c1;
}