#include <iostream>
using namespace std;
int main()
{
    string sub[]={"TOC","OOP","ECT","EDC","EM"};
    int mark[5];
    int i,total;
    for(i=0;i<5;i++)
    {
        cout<<"\nEnter the marks of "<<sub[i]<<":";
        cin>>mark[i];
    }
    for(i=0;i<5;i++)
    {
        total+=mark[i];
    }
    cout<<"\nThe total is :"<<total;
}