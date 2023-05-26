//Making functions outside the class definition inline
#include <iostream>
using namespace std;
class Student{
    int roll; 
    char name[20],phone[10];
    public:
    void getData();
    void showData();
    };
    inline void Student::getData()
    {
        cout<<"\nEnter Roll No: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Phone Number: ";
        cin>>phone;
    }
    inline void Student::showData()
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
