#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    for(int i=0;i<=4;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<=4;i++)
    {cout<<p[i];}
    delete []p;
    return 0;
}
//p[i]=*(p+i)
