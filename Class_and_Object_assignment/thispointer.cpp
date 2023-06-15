#include<iostream>
using namespace std;
class A{
    int x; 
    public:
    void getNum(int x)
    {
    this->x=x;
    }
    void showNum()
    {
    cout<<"\n"<<x;
    }
};
int main()
{
    A obj1,obj2;
obj1.getNum(5);
obj1.showNum();
obj2.getNum(10);
obj2.showNum();
}