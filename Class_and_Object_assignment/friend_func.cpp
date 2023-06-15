#include <iostream>
using namespace std;
class Sample
{
    friend float mean(Sample s);
    private:
    float num1,num2;
    public:
    void getData()
    {
        float a,b;
        cout<<"Input data: "<<endl;
        cin>>a>>b;
        num1=a;
        num2=b;
    }
};
float mean(Sample s)
{
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}
int main()
{
    Sample s;
    s.getData();
    cout<<"The result is : "<<mean(s);
}