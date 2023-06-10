#include<iostream>
using namespace std;
void calcArea(int b)
    {
    cout<<"\nThe area of square is : "<<b*b;
    }
void calcArea(float c)
{
    float g=(3.14);
    cout<<"\nThe area of circle is : "<<(g*(c*c));
}
void calcArea(float c,float d)
{
    cout<<"\nThe area of rectangle is : "<<c*d;
}
int main()
{
    int choose;
    cout<<"\n1.Square\n2.Circle\n3.Rectangle";
    cout<<"\nEnter choice for calculating area: ";
    cin>>choose;
    switch(choose)
    {
    case 1:
    int a;
    cout<<"Enter the value of side length of square: ";
    cin>>a;
    calcArea(a);
    break;
    case 2:
    float r;
    cout<<"Enter the value of radius of circle: ";
    cin>>r;
    calcArea(r);
    break;
    case 3:
    float l,b;
    cout<<"Enter the value of length and breadth of rectangle: ";
    cin>>l>>b;
    calcArea(l,b);
    break;
    default:
    cout<<"Wrong choice.Please choose from 1 or 2 or 3";
    }
    
    // int s=10;
    // float r;
    // float l,b;
    // cout<<"Enter radius: ";
    // cin>>r;
    // cout<<"Enter length and breadth: ";
    // cin>>l>>b;
    // calcArea(s);
    // calcArea(r);
    // calcArea(l,b);
}