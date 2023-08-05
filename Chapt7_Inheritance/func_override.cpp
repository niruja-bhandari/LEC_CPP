#include <iostream>
using namespace std;
class Base{
public:
void print ()
{
    cout<<"\nBase class";
}
};
class Derived : public Base{
    public:
void print ()
{
    cout<<"\nDerived class";
}
};
int main(){
    Derived d1;
    d1.print();
    d1.Base::print();
}