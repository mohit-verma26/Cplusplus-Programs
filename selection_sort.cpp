#include<iostream>
using namespace std;
int main()
{
    int i,loc,minn,temp,j;
    int ar[]={37,57,11,18,6,69,12};

    for(i=0;i<6;i++)
    {
        loc=i;
        for(j=i+1;j<7;j++)
        {
            if(ar[loc]>ar[j])
            {
                loc=j;

            }
        }
        temp=ar[loc];
        ar[loc]=ar[i];
        ar[i]=temp;
    }
    for(i=0;i<7;i++)
    {
        cout<<ar[i]<<" ";
    }
     return 0;
}
