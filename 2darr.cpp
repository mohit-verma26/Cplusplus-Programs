#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j,n=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Element in Index "<<n<<":- "<<arr[i][j]<<"\n";
            n++;
        }
    }
}
