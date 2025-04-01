#include<iostream>
using namespace std;
int main()
{
    int i,j,minn,loc,temp;
    int ar[]={33,11,66,88,99,77,44,55,22,1};


    for(i=0;i<9;i++)
    {
        loc=i;
        minn=ar[i];
        for(j=i+1;j<10;j++)
        {
            if(minn>ar[j])
            {
                minn=ar[j];
                loc=j;
            }
        }
        temp=ar[loc];
        ar[loc]=ar[i];
        ar[i]=temp;
    }
for(i=0;i<10;i++)
{
    cout<<ar[i]<<" ";
}
return 0;
}
