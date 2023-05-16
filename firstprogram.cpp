#include <iostream>
using namespace std;
class student{
    char assignment[10];
    int roll;
public:
    void read(){
        cout<<"enter roll no:";
        cin>>roll;
    }
    void assign(){
        cout<<"Assignment submission [Y/N]:";
        cin>>assignment;
    }
    void info(){
        cout<<"Roll no:"<<roll<<endl;
        cout<<"Assignment submission:"<<assignment<<endl;
    }
};
int main(){
    student pabitra,shruti;
    cout<<"Student : Pabitra"<<endl;
    pabitra.read();
    pabitra.assign();
    pabitra.info();
    cout<<"\nStudent : Shruti"<<endl;
    shruti.read();
    shruti.assign();
    shruti.info();
}
