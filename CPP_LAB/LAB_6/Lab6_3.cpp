#include<iostream>
using namespace std;
class Design1
{
    int code,qty,price;
    public:
    void get_data()
{
    cout<<"Enter the code: ";
    cin>>code;
    cout<<"Enter the quantity: ";
    cin>>qty;
    cout<<"Enter the price: ";
    cin>>price;
}
int code1()
{
    return code;
}
int value()
{
    return qty*price;
}
};
class Design2
{
    int code,value;
    public:
    Design2(){};
    Design2(Design1 &D1)
    {
        code= D1.code1();
        value = D1.value();
    }
    void show_data()
    {
        cout<<"The code is: "<<code<<endl;
        cout<<"The value is: "<<value<<endl;
    
    }
};
int main()
{
    Design1 D1;
    D1.get_data();
    Design2 D2;
    D2=D1;
    D2.show_data();
}