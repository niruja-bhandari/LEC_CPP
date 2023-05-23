#include <iostream>
using namespace std;
int main()
{
    int n1,n2,res,choose;
cout<<"Enter two numbers:";
cin>>n1>>n2;
cout<<"1.Addition\n2.Subtraction\n3.Multiplication";
cout<<"\nEnter the choice(1-3)";
cin>>choose;
switch(choose)
{
    case 1:
    cout<<"Addition :"<<n1+n2;
    break;
    case 2:
    cout<<"Subtraction :"<<n1-n2;
    break;
    case 3:
    cout<<"Multiplication :"<<n1*n2;
    break;
    default:
    cout<<"Wrong choice.Please choose from 1 or 2 or 3";
}
}