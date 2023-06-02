#include <iostream>
using namespace std;
class Complex
{
    public:
    float real,imag;
    Complex()
    {
    float real,imag;
    }
    Complex(float re,float im)
    {
        real=re;
        imag=im;
    }
    void getValue()
    {
        cout<<"\nEnter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>imag;
    }
    void showValue()
    {
        cout<<"("<<real<<"+i"<<imag<<")";
    }
    };
    Complex add(Complex c, Complex d)
    {
        Complex result;
        result.real=c.real+d.real;
        result.imag=c.imag+d.imag;
        return result;
    }
int main()
{
    Complex c1,c2(4.2,5.3),c3;
    c1.getValue();
    c3=add(c1,c2);
    c1.showValue();
    cout<<"+";
    c2.showValue();
    cout<<" = ";
    c3.showValue();
}