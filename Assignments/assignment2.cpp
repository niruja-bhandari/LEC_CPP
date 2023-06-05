//Operator overloading
//Non overloadable operator : ("." dot )("::"scope resolution)(".*"pointer to member)("?:"ternary operator)
#include <iostream>
using namespace std;
class Complex{
public:
float real,imag;
Complex(){}
Complex(float r1,float i1)
{
    real=r1;
    imag=i1;
}
void display()
{
    cout<<"("<<real<<" + "<<imag<<"i)";
}
Complex operator + (Complex a) //Operator overload
{
    Complex temp;
    temp.real=real+a.real;
    temp.imag=imag+a.imag;
    return temp;
}
};
int main(){
    Complex c1(5.5,3.2),c2(4.4,2.2),c3;
    c3=c1+c2;//c1.operator+(c2)
    c1.display();
    cout<<"+";
    c2.display();
    cout<<"=";
    c3.display();
}
