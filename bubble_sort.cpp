#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,j;
    int ar[]={2,5,1,3,9,7,4};
for(n=1;n<=6;n++)
{
for(i=0;i<=6-n;i++)
{
    if(ar[i]>ar[i+1])
    {
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
}    }
}
for(i=0;i<7;i++)
{
    cout<<ar[i];
}
}
