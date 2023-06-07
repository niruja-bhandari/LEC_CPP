#include<iostream>
using namespace std;
int *roll = new int;
char *name = new char[30];
void getData() 
{
    cout<<"\nEnter your Name: ";
    cin>>name; 
    cout<<"\nEnter the roll number: ";
    cin>>*roll;   
}
void printData() {
    cout<<endl<<"Name: "<<name;
    cout<<endl<<"Roll No.: "<<*roll;
}
void freeMemory() {
    delete roll;
    delete [] name;
}
int main() {
    getData();
    cout<<"\nMemory allocated dynamically for name and roll.";
    cout<<"\nValue of Name and Roll before deallocation : ";
    printData();
    freeMemory();
    cout<<"\n\nAfter Deallocation : ";
    printData();
}