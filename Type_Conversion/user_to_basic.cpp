#include <iostream>
using namespace std;
class Celsius{
float temp; 
public:
Celsius()
{
    temp=0;
}
operator float()
{
    float fer;
    fer = (temp*9/5)+32;
    return fer;
}
void getTemp()
{
    cout<<"\nEnter temperature in Celsius: ";
    cin>>temp;
}
};
int main(){
    Celsius cel;//cel is user defined
    float fer;//fer is basic type
    cel.getTemp();
    fer=cel;//converts from user defined to basic type
    cout<<"Temperature in Fahrenheit measurement: "<<fer;
}