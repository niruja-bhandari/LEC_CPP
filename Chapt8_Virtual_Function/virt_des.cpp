#include <iostream>
using namespace std;
class Base {
    public: Base() {
        cout << "Constructor of Base class is called" << endl;
    }
    // Defining virtual destructor.
    virtual~Base() {
        // At last, it will be printed.
        cout << "Destructor of Base class is called" << endl;
    }
};
class Child: public Base {
    public: Child() {
            cout << "Constructor of Child class is called" << endl;
        }
        // It will be called before calling the Base class destructor.
        ~Child() {
            cout << "Destructor of Child class is called" << endl;
        }
};

int main() {
    Base * b = new Child; //  Object refers to the Base class.
    delete b; // Deleting the pointer object.
    return 0;
}