#include<iostream>
using namespace std;
class Complex{
    static int real;
    static int img;
    static int count;
    public:
    Complex()
    {  
    count++;
    }

    ~Complex()
    {     
    cout<<"\nThere are "<<count<<" objects";
    }
    


};
int Complex::real=0;
int Complex::img=0;
int Complex::count=0;
int main()
{
Complex c1,c2;
}