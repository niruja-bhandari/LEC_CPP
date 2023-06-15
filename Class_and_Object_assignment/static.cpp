#include <iostream>
using namespace std;
void display()
{
    static int i=1;
    i=i+5;
    cout<<"\nThe value of i is: "<<i;
}
int main()
{
    display();
    display();
}