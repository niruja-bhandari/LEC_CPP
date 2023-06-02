#include <iostream>
using namespace std;
class Student{
    public:
    double marks;
Student(double m)
{
    marks=m;
}
};
void calculateAverage(Student s1,Student s2)
{
    double average;
    average=(s1.marks+s2.marks)/2;
    cout<<"\nThe average marks of both students:  "<<average;
}
int main()
{
    Student a(600),b(700);
    calculateAverage(a,b);
    }