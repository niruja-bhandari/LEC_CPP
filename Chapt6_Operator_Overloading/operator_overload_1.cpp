#include <iostream>
using namespace std;
class Postfix{
int a,b,c ;
public:
Postfix()
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
friend void operator ++(Postfix &a,int);
};
void operator ++(Postfix &p,int)
{
p.a++;p.b++;p.c++;
}
int main(){
Postfix a;
a.show();
a++;
a.display();
}