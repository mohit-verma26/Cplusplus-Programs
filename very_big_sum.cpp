#include<iostream>
using namespace std;
int vsm()
{
    int i,j,n=10;
    long long int summ=0;
    unsigned long long int sum[n];
    cout<<"Enter the Numbers:- ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>sum[i];
        summ=summ+sum[i];
    }
    cout<<summ;
    return 0;
}
int main()
{
    vsm();
}
