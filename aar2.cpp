#include<iostream>
using namespace std;
int arr()
{
    int a[1000],i,sum=0;

    for(i=0;i<=3;i++)
    {
     cout<<"Enter the values of array "<<i<<" ";
     cin>>a[i];
    }
    for(i=0;i<=3;i++)
    {
        sum=sum+a[i];
        cout<<sum<<endl;
    }
cout<<sum;
}
int main()
{

    arr();
}
