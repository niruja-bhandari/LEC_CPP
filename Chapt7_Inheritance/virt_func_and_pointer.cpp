#include <iostream>
using namespace std;
class Base{
public:
virtual void print ()
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
    Base *b1 = &d1;
    b1->print();
}