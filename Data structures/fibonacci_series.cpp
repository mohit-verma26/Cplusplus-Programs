#include<iostream>
using namespace std;
fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<fib(i)<<" ";
    }

    cout<<endl;
    cout<<fib(6);
    return 0;
}
