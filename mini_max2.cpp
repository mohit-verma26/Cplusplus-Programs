#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long ar[10000],i,j,n,sum=0,maxx=0,minn=0,sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n-1;i++)
    {
        minn+=ar[i];
    }
    for(i=1;i<n;i++)
    {
        maxx+=ar[i];
    }
    cout<<minn<<" "<<maxx;
        return 0;

}
