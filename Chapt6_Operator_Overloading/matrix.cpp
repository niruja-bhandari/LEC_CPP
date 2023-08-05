#include <iostream>
using namespace std;
class Matrix
{
int  a[3][3];
public:
void read()
{
    for (int i = 0; i < 3; i++)     
    {
    for (int j = 0; j < 3; j++)
    {
    cout<<"Enter a["<<i<<"]["<<j<<"]: ";  
    cin>>a[i][j];
    }
    }
}
void display()
{
    for (int i = 0; i < 3; i++)     
    {cout<<"\n";
    for (int j = 0; j < 3; j++)
    {
        cout<<"\t"<<a[i][j];
    }
    }
}
Matrix operator * (Matrix m)
{
    Matrix ma;
    for (int i = 0; i < 3; i++) 
    {    
    for (int j = 0; j < 3; j++)
        {
            ma.a[i][j]=0;
        }
    }
    for (int i = 0; i < 3; i++) 
    {    
    for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
            ma.a[i][j]+=a[i][k] * m.a[k][j];                  
            }
        }
    }
    return ma;
}
};
int main(){
    Matrix m1,m2,m3;
    cout<<"Enter first matrix: "<<endl;
    m1.read();
    cout<<"\nEnter second matrix: "<<endl;
    m2.read();
    m3=m1*m2;
    cout<<"\n Product of two matrix: "<<endl;
    m3.display();
}