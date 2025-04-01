#include<iostream>
using namespace std;
int main()
{
    long long ar[10000],i,j,n,sum=0,maxx=0,minn=0,sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    sum2=sum;
            minn=maxx;

    for(j=0;j<n;j++)
        {

        sum=sum-ar[j];
        minn=maxx;
        sum1=sum;
        if(maxx<sum1)
        {
            maxx=sum1;
        }
        if(minn>sum1)
        {
            minn=sum1;

        }
            sum=sum2;
        }
        cout<<minn<<" "<<maxx;
        return 0;

}
