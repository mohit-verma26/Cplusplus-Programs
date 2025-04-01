#include<iostream>
using namespace std;
template <class z, class v>z maxn(z x, v y)
{
    if(x>y)
    {
        cout<<"greater number is :- ";return(x);
    }
    else
    {
        cout<<"greater number is :- ";return(y);
    }
}
int main()
{
    cout<<maxn(8.8,5);
    return 0;
}
