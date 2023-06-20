#include <iostream>
using namespace std;
class Part{
static int count ;
int pid;
public:
Part(){
    count++;
    pid=count;
}
int getCount(){
    return count;
}
void show(){
    cout<<"parts id : "<<pid<<endl;
    cout<<"total number of parts are: "<<count<<endl;
}
};
int Part::count=0;
int main(){
    Part p1,p2;
    cout<<"count is (p1) : "<<p1.getCount()<<endl;
    p1.show();
    cout<<"count is (p2) : "<<p2.getCount()<<endl;
    p2.show();
    Part p3;
    cout<<"count is (p3) : "<<p3.getCount()<<endl;
    p3.show();
    cout<<"count is (p1) :  "<<p1.getCount()<<endl;
    p1.show();
}