#include<iostream>
using namespace std;
int main()
{
int j,n,h,m;
cout<<"Enter the no.";
cin>>n;
m=n-1;
for(j=m;j>0;j--)
{
n=n*m;
m--;
}
cout<<"Factorial of no. is"<<n;
return 0;
}
