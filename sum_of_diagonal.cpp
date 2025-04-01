#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[5][5],sum1=0,sum2=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                {
                    sum1=sum1+arr[i][j];
                }
            if(i+j==n-1)
            {
                sum2=sum2+arr[i][j];
            }

        }


}
cout<<sum1<<endl;
cout<<sum2;
}
