#include <iostream>
using namespace std;
class Base {
    public:
    virtual void print() {
        cout << "Base Function is called" << endl;
    }
};
class Derived : public Base {
    public:
    void print() {
        cout << "Derived Function is called" << endl;
    }
};
int main() {
    Derived d1;

    // pointer of Base type that points to derived1
    Base* b1 = &d1;
    // calls member function of Derived class
    b1->print();
    return 0;
}