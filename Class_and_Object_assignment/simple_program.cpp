#include<iostream>
using namespace std;
class Friends{
    public:
    Friends(string n,string p,string a)
    {
        cout<<"\n\nMy Friends name is : "<<n;
        cout<<"\nMy Friends Phone No is : "<<p;
        cout<<"\nMy Friends Address is : "<<a;
    }
};
int main()
{
    Friends Shruti("Shruti","984332200","Chabahil Ktm"), Pabitra("Pabitra","983201230","Bhaisipati ,Lalitpur");
}