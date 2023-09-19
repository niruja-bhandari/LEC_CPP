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
    void display()
    {
    cout<<"The sum of two numbers is : "<<num;  
    }
friend Add operator + (Add &num1, Add &num2);
};
Add operator + (Add &a, Add &b)
    {
    Add a1;
    a1.num=a.num+b.num;
    return a1;
    }
int main()
{
    Add num1(6),num2(8),num3;
    num3=num1+num2;
    num3.display();
}