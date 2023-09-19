#include<iostream>
using namespace std;
class dayer{};
class monther{};
class yearer{};
class Date
{
    int day,month,year;
    public:
    void read_date() throw(dayer, monther);
    void show_data();
}; 
void Date::read_date() throw(dayer, monther)
{
    cout<<"enter day: ";
    cin>>day;
    if(day>31)
    throw dayer(); //nameless object of exception class yearer{}
    cout<<"enter month: ";
    cin>>month;
    if(month>12)
    throw monther();
    cout<<"enter year: ";
    cin>>year;
    if(year<0)
    throw yearer();
}
void Date::show_data()
{
    cout<<"Date of birth is: "<<day<<"/"<<month<<"/"<<year;
}
int main()
{
    Date d1;
    try
    {
        cout<<"Enter your date of birth: "<<endl;
        d1.read_date();
        d1.show_data();
    }
    catch(dayer)
    {
        cout<<"Exception: day cannot be greater than 31";
    }
    catch(monther)
    {
    cout<<"Exception: month cannot be greater than 12"; 
    }
    catch(yearer)
    {
    cout<<"Exception: year cannot be negative"; 
    }
}