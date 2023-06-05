#include<iostream>
using namespace std;
void  swap ( int *x,int *y)
{
int *temp;
temp = x;
x=y;
y=temp;
}
int getNum(){          
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    return a;
}

int main()
{
    int num1=getNum();
    int num2=getNum();
    cout<<"Values before swap are: "<<num1<<" and "<<num2<<endl;
    swap(num1, num2);
    cout<<"Values after swap are: "<<num1<<" and "<<num2<<endl;
}