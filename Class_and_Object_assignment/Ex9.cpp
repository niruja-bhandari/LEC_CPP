#include <iostream>
using namespace std;
class Pointer{
    int *ptr;
    public:
    void setPointer(int *var)
    {
        ptr=var;
    }
    void display()
    {
        cout<<*ptr;
    }
};
int main()
{
    int num=5;
    Pointer p;
    p.setPointer(&num);
    p.display();
}