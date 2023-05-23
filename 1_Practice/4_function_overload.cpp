#include <iostream>
using namespace std;
void add(int a,int b)
    {
        cout<<"\nThe addition of integer number is :"<<a+b;
    }
    void add(float c,float d)
    {
        cout<<"\nThe addition of float number is :"<<c+d;
    }
int main()
{
    int n1,n2;
    float n3,n4;
    cout<<"Enter two integer numbers:";
    cin>>n1>>n2;
    cout<<"\nEnter two float numbers:";
    cin>>n3>>n4;
    add(n1,n2);
    add(n3,n4);

}
    