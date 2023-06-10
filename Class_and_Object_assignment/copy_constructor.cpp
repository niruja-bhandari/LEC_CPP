#include<iostream>
using namespace std;
class Wall{
    double length,height;
    public:
    Wall(double l,double h)
    {
        length=l; height=h;
    }
    Wall(Wall &obj)
    {
        length=obj.length; height=obj.height;
    }
    double calculateArea()
    {
        return length*height;
    }
};
int main()
{
    Wall wall1(10.2,12.3);
    cout<<"Area of the wall1 is: "<<wall1.calculateArea()<<endl;
    Wall wall2=wall1;
    cout<<"Area of the wall2 is: "<<wall2.calculateArea();
}