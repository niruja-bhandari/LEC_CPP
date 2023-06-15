#include<iostream>
using namespace std;
class Student{
char name[30];
int roll;
public:
void getData()
{
    cout<<"\nEnter the name: ";
    cin>>name;
    cout<<"Enter the roll no: ";
    cin>>roll;
} 
void showData()
{
    cout<<"\nName : "<<name<<endl;
    cout<<"Roll No : "<<roll;
}
};
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getData();
    }
    cout<<"\nStudent Info: ";
    for(int j=0;j<5;j++)
    {
        s[j].showData();
    }
}