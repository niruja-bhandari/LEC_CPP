//Definition of function outside class definition
#include <iostream>
using namespace std;
class Student{
    int roll; 
    char name[20],phone[10];
    public:
    void getData();//function declaration
    void showData();
    };
    void Student::getData()
    {
        cout<<"\nEnter Roll No: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Phone Number: ";
        cin>>phone;
    }
    void Student::showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Phone Number: "<<phone<<endl;
    }

int main()
{
    Student s1,s2;
    s1.getData();
    s2.getData();
    cout<<"\nFirst student"<<endl;
    s1.showData();
    cout<<"\nSecond student"<<endl;
    s2.showData();
}