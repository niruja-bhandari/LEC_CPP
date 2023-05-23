#include <iostream>
using namespace std;
class Account{
    public:
    double salary;
    double bonus;
    
    Account(){
        cout<<"this is account";
    }
    Account(double sal,double bon){
    salary = sal;
    bonus = bon;
    }
    double calculateTotal(){
        return salary+bonus;
    }
    void calculateTotal(int a,int b){
    cout<<"\nMultiplication is :"<<a*b;
        }
};

int main(){
Account a1,s1(60000,3000);
a1.calculateTotal(5000,200);
cout<<"\nTotal salary:"<<s1.calculateTotal();


}   