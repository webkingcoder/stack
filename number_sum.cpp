#include<iostream>
using namespace std;
int main()
{
int sum=0;
int n;
cout<<"enter last no:";
cin>>n;
for (int i = 0; i <= n; i++)
{
    sum=sum+i;
}
cout<<sum;
return 0;
}