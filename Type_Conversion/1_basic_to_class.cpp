#include<iostream>
using namespace std;
class Time
{
    int hrs,min;
    public:
    void operator = (int t)
    {
        cout<<"basic type to ==> Class type conversion..."<<endl;
        hrs=t/60;
        min=t%60;
    }
    void display()
    {
    cout<<"hours: "<<hrs<<endl;
    cout<<"minutes: "<<min<<endl;
    }
};
int main()
{
int duration;
Time t1;
cout<<"enter the duration in minutes: ";
cin>>duration; 
cout<<"object t1 overloded assignment"<<endl;
t1=duration;//calling function
t1.display();
cout<<"second method"<<endl;
t1.operator = (duration);//second method of calling function
t1.display();
}