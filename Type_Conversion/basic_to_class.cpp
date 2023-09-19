#include<iostream>
using namespace std;
class Time
{
    int hrs,min;
    public:
    Time(int t)
    {
        cout<<"basic to class type conversion"<<endl;
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
cout<<"enter the duration in minutes: ";
cin>>duration;
Time t1=duration;
t1.display();
}