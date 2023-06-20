#include <iostream>
using namespace std;
class Employee{
float salary ;
char name[25] ;
public:
void getData()
{
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"Enter salary: ";
    cin>>salary;
}
void showData()
{
    cout<<"\nName: "<<name<<endl;
    cout<<"Salary: "<<salary;
}
};
int main(){
    Employee *eptr;
    Employee e;
    eptr=&e;
    eptr ->getData();
    cout<<"\nAccessing data through pointer variable: ";
    eptr->showData();
}






