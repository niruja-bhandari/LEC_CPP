#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,large;
    cout<<"Enter 3 numbers:";
    cin>>n1>>n2>>n3;

    if(n1>n2)
    {
        large= n1>n3 ? n1:n3;
        cout<<large;
    }
    else{
        large= n2>n3 ? n2:n3;
        cout<<large;
    }
    
}