#include<iostream>
#include<cmath>
using namespace std;
class Number{
    double num;
    public:
    class NEG{};//exception class
    void readNum()
    {
        cout<<"Enter a number: ";
        cin>>num;
    }
    double sroot()
    {
    if(num<0)
    throw NEG();
    else 
    return(sqrt(num));
    }
};
int main()
{
    Number n1;
    n1.readNum();
    cout<<"Calculating square root ....."<<endl;
    try{
        double res = n1.sroot();
        cout<<"Square root is : "<<res<<endl;
        cout<<"No exception raised"<<endl;
    }
    catch(Number::NEG)
    {
        cout<<"Square root is not possible when the number is negative";
    }
    }