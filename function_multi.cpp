// Define a function that returns the product of two numbers entered by user.
#include<iostream>
using namespace std;
int multi(int,int);
int multi(int a,int b)
{
    return (a*b);
}

int main ()
{
    int x,y,s;
    cout<<"enter the values: "<<endl;
    cin>>x>>y;
    s=multi(x,y);
    // cout<<multi(x,y);
    cout<<s;

    return 0;
}