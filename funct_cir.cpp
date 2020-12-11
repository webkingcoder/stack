// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
#include <iostream>
using namespace std;

void cir(float r)
{
    float cir;
    cir=2*3.14*r;
    cout<<"circumference is: "<<cir<<endl;

}


void area(float r)
{
    float area;
    area=3.14*r*r;
    cout<<"area is: "<<area<<endl;
}

int main ()
{
    float rad,s,a;
    cout<<"enter the radios of circle :"<<endl;
    cin>>rad;
    cir(rad);
    area(rad);
    
    return 0;
}