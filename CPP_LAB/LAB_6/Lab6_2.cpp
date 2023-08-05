#include <iostream>
using namespace std;
class Matrix
{
friend Matrix operator * (Matrix m,Matrix n);
friend Matrix operator - (Matrix m,Matrix n);
private:
int  a[2][2];
public:
void read()
{
    for (int i = 0; i < 2; i++)     
    {
    for (int j = 0; j < 2; j++)
    {
    cout<<"Enter a["<<i<<"]["<<j<<"]: ";  
    cin>>a[i][j];
    }
    }
}
void display()
{
    for (int i = 0; i < 2; i++)     
    {cout<<"\n";
    for (int j = 0; j < 2; j++)
    {
        cout<<"\t"<<a[i][j];
    }
    }
}

};
Matrix operator * (Matrix m,Matrix n)
{
    Matrix ma;
    for (int i = 0; i < 2; i++) 
    {    
    for (int j = 0; j < 2; j++)
        {
            ma.a[i][j]=0;
        }
    }
    for (int i = 0; i < 2; i++) 
    {    
    for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
            ma.a[i][j]+=m.a[i][k] * n.a[k][j];                  
            }
        }
    }
    return ma;
}
Matrix operator - (Matrix m,Matrix n)
{
    Matrix ma1;
    for (int i = 0; i < 2; i++)     
    {
    for (int j = 0; j < 2; j++)
    {
    ma1.a[i][j] = m.a[i][j] - n.a[i][j];  
    }
    }
    return ma1;
}
int main(){
    Matrix m1,m2,m3;
    cout<<"Enter first matrix: "<<endl;
    m1.read();
    cout<<"\nEnter second matrix: "<<endl;
    m2.read();
    m3=m1*m2;
    cout<<"\n Product of two matrix: "<<endl;
    m3.display();
    cout<<"\n Sumation of two matrix: "<<endl;
    m3=m1-m2;
    m3.display();
}