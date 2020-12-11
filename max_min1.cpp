#include<iostream>
using namespace std;

void max();
void max()
{
    int arr[5];
    int max=0;
    cout<<"enter 5 numbers"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>=max)
        {
            max=arr[i];
        }
    }
     cout<<"the greatest no is: "<<max<<endl;
}

void min();
void min()
{
    int arr[5];
    int min=0;
    cout<<"enter 5 numbers"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<=min)
        {
            min=arr[i];
        }
    }
     cout<<"the smallest no is: "<<min;
}


int main()
{
    // max();
    min();
    return 0;
}