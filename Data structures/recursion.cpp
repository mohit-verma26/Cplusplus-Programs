#include<iostream>
using namespace std;
int sum(int x)
{
    int s;
    if(x==1)
        return x;
    s=x+sum(x-1);
    return s;
}
int main()
{
    int summ;
    summ=sum(5);
    cout<<summ;
    return 0;
}
