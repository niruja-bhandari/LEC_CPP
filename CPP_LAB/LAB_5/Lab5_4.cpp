#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    friend float magnitude(Complex x);
    private:
    float real,imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    void readValue()
    {
        cout<<"Enter Real Part: ";
        cin>>real;
        cout<<"Enter Imaginary Part: ";
        cin>>imag;
    }
    void showValue()
    {
        cout<<"The magnitude of ("<<real<<"+i"<<imag<<") is : ";
    }

};
float magnitude (Complex x)
{
float z;
z=sqrt(pow(x.real,2)+pow(x.imag,2));
return z;
}
int main()
{
Complex c1;
c1.readValue();
float a = magnitude(c1);
c1.showValue();
cout<<a;
}