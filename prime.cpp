#include<iostream>
using namespace std;
int main()
{
    int a,i,j,countt=0;
    cout<<"Enter the no.";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            countt++;
        }
    }
    if(countt==2)
    {
        cout<<"Enterd value is prime";
    }
    else
    {
        cout<<"Enter value is not prime";
    }
}
