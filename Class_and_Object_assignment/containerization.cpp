#include<iostream>
using namespace std;
class A{
    public:
    int data;
void getData()
{
    cout<<"Enter the value of data : ";
    cin>>data;
}
void showData()
{
cout<<"\nThe value of data is: "<<data;
}
};
class B{
    public:
    A a;
    int b;
void getData()
{
    a.getData();
    cout<<"Enter the value of b: "<<b;
}
void showData()
{
    a.showData();
cout<<"\nThe value of b is: ";
cout<<b;
}
};
int main()
{
    B b;
    b.getData();
    b.showData();
}

