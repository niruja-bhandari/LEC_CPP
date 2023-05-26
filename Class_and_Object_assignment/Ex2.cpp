//A practical example for class
#include <iostream>
using namespace std;
class Iteminfo{
    private:
    int itemid;
    float cost;
    public:
    void setData(int it,float cst)
    {
        itemid=it;
        cost=cst;
    }
    void showData()
    {
        cout<<"\nItem ID: "<<itemid;
        cout<<"\nCost: "<<cost<<endl;
    }
};
int main()
{
    Iteminfo i1,i2;
    i1.setData(55,35.50);
    i2.setData(555,135.25);
    cout<<"\nInformation on first item";
    i1.showData();
    cout<<"\nInformation on second item";
    i2.showData();
}