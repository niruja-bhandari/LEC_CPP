#include <iostream>
using namespace std;
class Student {
    char name [25];
    int score[5];
    public:
    void getdData();
    void showData();
    void showTotal();
};
void Student::getdData()
{
    cout<<"\nEnter Data for students: ";
    cout<<"\nName:";
    cin>>name;
    for(int j= 0;j<5;j++)
    {
    cout<<"Mark in Subject "<<j+1<<" : ";
    cin>>score[j];
    }
}
void Student::showData()
{
    cout<<"\nName: "<<name<<endl;
    cout<<"Marks in 5 subjects : ";
    for(int i=0;i<5;i++)
    {
    cout<<score[i]<<"\t";
    }
}
void Student::showTotal()
{
    int tot=0;
    for(int j=0;j<5;j++)
    {
        tot+=score[j];
    }
    cout<<"\nTotal Marks= "<<tot;
}
int main()
{
    Student s;
    s.getdData();
    s.showData();
    s.showTotal();
}