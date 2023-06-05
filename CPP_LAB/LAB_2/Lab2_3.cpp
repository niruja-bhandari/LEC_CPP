#include <iostream>
namespace BCE{
char subject[20] = "\nApplied Mechanics";
int room = 401;
void printSubject()
{
std::cout<<subject;
}
void printRoom(){
std::cout<<"\nThe room for Applied Mechanics class is: "<<room;
}
} 
namespace BCT{
char subject[30] = "\nC++";
int labRoom = 402;
void printSubject(){
std::cout<<subject;
}
void printLabRoom()
{
std::cout<<"\nThe room for C++ lab is: "<<labRoom;
}
} 
int main()
{
using namespace BCE;
using namespace BCT;
BCE::printSubject();
printRoom();
BCT::printSubject();
printLabRoom();

}