#include<iostream>
using namespace std;
int ctt()
{
    int al[3],bob[3],res[]={0,0},i,j,k;
    cout<<"Enter the Values for Alice :- ";
    for(i=0;i<3;i++)
    {
        cin>>al[i];
    }
    cout<<"Enter the values for BOB :- ";
    for(j=0;j<3;j++)
    {
        cin>>bob[j];
    }
    for(k=0;k<3;k++)
    {
        if(al[k]>bob[k])
        {
            res[0]++;
        }
        else if(al[k]<bob[k])
        {
            res[1]++;
        }
        else
        {

        }
    }
    cout<<res[0]<<" "<<res[1];
    return 0;
}

int main()
{
    ctt();
}
