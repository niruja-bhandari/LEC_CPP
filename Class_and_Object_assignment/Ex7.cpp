//C++ objects as Data Types
#include <iostream>
using namespace std;
class Complex{
    float real,imag;
    public:
    void readValue()
    {
        cout<<"Enter Real Part: ";
        cin>>real;
        cout<<"Enter Imaginary Part: ";
        cin>>imag;
    }
    void showValue()
    {
        cout<<"("<<real<<"+i"<<imag<<")";
    }
    void add(Complex c1,Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main()
{
    Complex c1,c2,c3;
    cout<<"Enter First Complex Number: "<<endl;
    c1.readValue();
    cout<<"\nEnter Second Complex Number: "<<endl;
    c2.readValue();
    c1.showValue();
    cout<<"+";
    c2.showValue();
    c3.add(c1,c2);
    cout<<"=";
    c3.showValue();
}
