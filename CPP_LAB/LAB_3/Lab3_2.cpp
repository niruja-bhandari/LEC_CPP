#include <iostream>
using namespace std;
int *roll = new int;
char *name = new char[35];
void RollandName()
{
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter the roll number: ";
cin>>*roll;
} 
void freeMemory(){
delete roll;
delete [] name;
}
void showData(){
cout<<endl<<"Name: "<<name;
cout<<endl<<"Roll No.: "<<*roll;
} 
int main ()
{
RollandName();
cout<<endl<<"Value of Name and roll before Deallocation";
showData();
freeMemory();
cout<<"\nValue of Name and Roll after Deallocation: ";
showData();
}