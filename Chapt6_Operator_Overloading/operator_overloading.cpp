#include <iostream>
using namespace std;
class Number{
int a,b,c;
public:
Number(int x,int y,int z)
{
    a=x;b=y;c=z;
}
void showData()
{
    cout<<"Values before operator overload: "<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
void operator -()
{
    a=-a;
    b=-b;
    c=-c;
}
void display()
{
    cout<<"Values after operator overload:"<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
};
int main()
{
Number obj(5,7,6);
obj.showData();
-obj;
obj.display();
}