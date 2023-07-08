//Time conversion
#include <iostream>
using namespace std;
class Time 
{
    int hr,min,sec ;
    public:
Time()
{
hr=0;min=0;sec=0;  
}
Time(int t)
{
if (t<60)
{
    hr=0;min=0;
    sec = t;
}
else{
    if(t / 60<60)
    {
        hr=0;min=t/60;sec=t%60;
    }
    else{
        hr=t/3600;min=(t%3600)/60;sec=(((t%3600)%60)%60);
    }
}
}
Time(Time &obj)
{
    hr=obj.hr;min=obj.min;sec=obj.sec;
}
void display()
{
    cout<<hr<<"hr"<<" "<<min<<"min"<<" "<<sec<<"sec";
}
};
int main(){
Time t(7000);
Time t1(t);
t1.display();
}