//Friend function
#include <iostream>
using namespace std;
class Complex{
    private:
float real,imag;
friend Complex add(Complex,Complex);//friend function
friend int main();//friend function
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
};
Complex add(Complex a,Complex b)
{
    Complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return temp;
}
int main(){
    Complex c1(3.3,6.1),c2(8.1,3.5),c3;
    c3=add(c1,c2);
    c1.display();
    cout<<"+";
    c2.display();
    cout<<"=";
    c3.display();
}
