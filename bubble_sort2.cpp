#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp=0,flag=0;
    int ar[]={55,44,20,89,9,99};
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-(i+1);j++)
        {
            if(ar[j]>ar[j+1])
            {
                flag=1;
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }

        }
        if(flag==0)
            {
                break;
            }
    }
    for(n=0;n<6;n++)
    {
        cout<<ar[n]<<" ";
    }
    return 0;
}
