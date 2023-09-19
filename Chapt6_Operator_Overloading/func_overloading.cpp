#include<iostream>
using namespace std;
class Area{
    public:
void calcArea(int b)
{
    cout<<"\nThe area of square is : "<<b*b;
}
void calcArea(float c,float d)
{
    cout<<"\nThe area of rectangle is : "<<c*d;
}
};
int main()
{
Area a;
a.calcArea(5);
a.calcArea(5.5,7.2);
}