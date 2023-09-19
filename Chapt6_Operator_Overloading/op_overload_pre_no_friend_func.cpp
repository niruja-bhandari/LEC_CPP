#include <iostream>
using namespace std;
class Prefix{
int a,b,c ;
public:
Prefix()
{
    a=0;
    b=1;
    c=2;
}
void show(){
    cout<<"Value of count before operator overload: "<<endl<<a<<endl<<b<<endl<<c;
}

void display(){
cout<<"\nValue of count after operator overload: "<<endl<<a<<endl<<b<<endl<<c;
}
void operator ++()
{
++a;++b;++c;
}
};
int main(){
Prefix a;
a.show();
++a;
a.display();
}