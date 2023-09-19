#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    try{
        if( a == b)
        {
        throw(a);
        }
        else{
            cout<<"Result:"<<(a/(a-b));
        }
    }
    catch(int a)
    {
        cout<<"Division by zero is not allowed"<<endl;
    }
}
