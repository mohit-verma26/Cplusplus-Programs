#include<iostream>
using namespace std;
int arrr()
{
    int arr[3],i,j,n,sum=0;
    for(i=0;i<=3;i++)
    {
        cout<<"Enter the value of I :- ";
        cin>>arr[i];
    }
    for(i=0;i<=3;i++)
    {
        cout<<"The value of Array is:- ";
        cout<<arr[i]<<endl;
        sum=sum+arr[i];
        cout<<sum<<endl;

    }
    return 0;
}

int main()
{
    arrr();
}
