#include <iostream>
using namespace std;
class Student{
protected:
int roll, a[5];
char name[30];
string sub[5]={"OOP","TOC","Electromagnetics","ECT","EDC"};
public:
void data()
{
    cout<<"enter name of student :";
    cin>>name;
    cout<<"enter the roll no: ";
    cin>>roll;
}
void mark()
{
    cout<<"enter the marks of subjects:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter marks of "<<sub[i]<<": ";
        cin>>a[i];
    }
}
};
class Test: public Student{
public:
float total, t=0;
float per=0;
float p=0;
void total1()
{
    for (int i = 0; i < 5; i++)
    {
        t += a[i];
    }
    for (int i = 0;i < 5; i++)
    {
        if(a[i]>40)
        {
        p++;
        }
    }
    if(p==5)
    {
        cout<<"Result  :  PASS"<<endl;
    }
    else{
        cout<<"Result  :  FAIL"<<endl;
    }
total=t;
per = ((total/500)*100);
}
};
class Result: public Test{
public:
void result()
{
    cout<<"The total marks is: "<<total<<endl;
    cout<<"The percentage is: "<<per<<"%";
    
}
};
int main(){
    Result r1;
    r1.data();
    r1.mark();
    r1.total1();
    r1.result();
}