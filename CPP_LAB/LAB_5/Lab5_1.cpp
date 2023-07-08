#include <iostream>
using namespace std;
class Complex
{
    const float real;
    public:
    float imag;
    Complex():real(9){}
    int getNum()
    {
        int a;
        cout<<"enter imaginary part : ";
        cin>>a;
        return a;
    }
    void display();
    };
    void Complex::display()
    {
        cout<<"The complex number is : ("<<real<<"+i"<<imag<<")";
    }
    
int main()
{
    Complex c1;          
    c1.imag = c1.getNum();
    c1.display();
}