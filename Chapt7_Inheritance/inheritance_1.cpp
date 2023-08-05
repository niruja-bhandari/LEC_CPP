#include <iostream>
using namespace std;
class Parent{
protected:
int id_protected ;
};
class Child :private Parent {
    public:
    void id(int id)
    {
        id_protected=id;
    }
    void id()
    {
    cout<<"id_protected is : "<<id_protected<<endl;
    }

};
int main(){
    Child c1;
    c1.id(5);
    c1.id();
}