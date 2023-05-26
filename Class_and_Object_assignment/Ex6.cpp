//C++ objects as physical objects
#include <iostream>
#include <cstring> //to use a string function strcpy(n1,n2)
using namespace std;
class Product{
    int productid; char name[15]; float cost;
    public:
    void setData(int pid,char pname[],float cst)
    {
        productid=pid;
        strcpy(name,pname);
        cost=cst;
    }
    void showData()
    {
        cout<<"\nProduct ID: "<<productid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Cost: "<<cost<<endl;
    }
};
int main()
{
    Product p1,p2;
    p1.setData(944,"CD-ROM",1500.00);
    p2.setData(945,"Pen Drive",1000.00);
    p1.showData();
    p2.showData();
}
