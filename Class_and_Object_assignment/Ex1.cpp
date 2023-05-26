//A typical example of a class
#include <iostream>
using namespace std;
class Simple{
private:
    int data1;
    int data2;
public:
    void setData(int d1,int d2)
    {
        data1=d1;
        data2=d2;
    }  
    void showData()
    {
        cout<<"\ndata1= "<<data1<<endl;
        cout<<"\ndata2= "<<data2<<endl;
    }  
};
int main()
{
    Simple s1,s2;
    s1.setData(101,102);
    s2.setData(201,202);
    s1.showData();
    s2.showData();
}