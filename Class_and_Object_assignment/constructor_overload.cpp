#include <iostream>
using namespace std;
class Add{
    public:
    Add()
    {
        cout<<"The calculations are:";
    }
    Add(int a,int b)
    {
        cout<<"\nThe sum of "<<a<<" and "<<b<<" is : "<<a+b;
    }
    Add(float a,float b,float c)
    {
        cout<<"\nThe sum of "<<a<<","<<b<<" and "<<c<<" is : "<<a+b+c;
    }
};
int main()
{
    Add c,c1(59,22),c2(33.3,4.44,55.8);
    
}