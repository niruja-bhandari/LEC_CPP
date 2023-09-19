#include<iostream>
using namespace std;
class Add
{
    int num;
    public:
    Add(){}
    Add(int b)
    {
    num=b;
    }
    Add operator + (Add a)
    {
    Add a1;
    a1.num=num+a.num;
    return a1;
    }
    void display()
    {
    cout<<"The sum of two numbers is : "<<num;  
    }
};
int main()
{
    Add num1(6),num2(8),num3;
    num3=num1+num2;
    num3.display();
}