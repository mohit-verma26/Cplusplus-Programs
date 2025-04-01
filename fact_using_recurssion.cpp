#include<iostream>
using namespace std;
int fat(int n);

int main()
{
    int a;
    cin>>a;
cout<<fat(a);
return 0;
}
int fat(int n)
    {


        if(n>1)
        {
            return n*fat(n-1);
        }
        else
        {
            return 1;
        }
    }
