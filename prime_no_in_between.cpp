#include<iostream>
using namespace std;
int main()
{
    int a,i,j,countt=0;

    for(int x=1;x<=100;x++ )
    {
        a=x;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            countt++;
        }
        cout<<a;
    }

    }
}
