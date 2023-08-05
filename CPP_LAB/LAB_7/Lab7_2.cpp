//order of invocation of constructor and destructor in inheritance
#include <iostream>
using namespace std;
class Parent{
    public:
    Parent()
    {
    cout<<"Parent constructor called"<<endl;   
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
    cout<<"Child constructor called"<<endl;
    }
    ~Child()
    {
        cout<<"Child destructor called"<<endl;
    }
}; 
int main(){
    Child c1;
}