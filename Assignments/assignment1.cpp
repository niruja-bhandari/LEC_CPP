//Copy Constructor
#include <iostream>
using namespace std;
class Number{
    public:
    int num;
    Number(){} //There should always be a default constructor
    Number(int a)//Parameterized Constructor
    {
    num=a;
    }
    Number(Number &obj) //Copy Constructor //takes the address of an object of the class Number
    {
        cout<<"Copy Constructor Called!!"<<endl;
        num=obj.num;  
    }
    void showData()
    {
        cout<<"The value of a is: "<<num<<endl;
    }
};
int main()
{
    Number x(50),y(33),z(24),z3;
    x.showData();
    y.showData();
    z.showData();
    Number z1(z);//invokes copy constructor
    z1.showData();
    Number z2=x; //another way to invoke copy constructor
    z2.showData();
}
//Note:When no copy constructor is found compiler supplies its own copy constructor.   