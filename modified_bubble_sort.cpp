#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,j,flag;
    int ar[]={9,1,2,3,4,5,7};
for(n=1;n<=6;n++)
{
    flag=0;
for(i=0;i<=6-n;i++)
{
    if(ar[i]>ar[i+1])
    {
        flag=1;
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
    }
}
if(flag==0)
    {
        cout<<n<<endl;
        break;
    }
}
for(i=0;i<7;i++)
{
    cout<<ar[i];
}
return 0;
}
