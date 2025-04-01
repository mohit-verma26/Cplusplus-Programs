#include<iostream>
#include<stdlib.h>
using namespace std;
class home
{
    public:
    int a,b;
    home()
    {
        a=1,b=2;
    }
    home(int k)
    {
        a=b=k;
    }
    home(int k,int j)
    {
        a=k;
        b=j;
    }
    int dis()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    home d1;
    home d2(5);
    home d3(4,8);
    d1.dis();
    d2.dis();
    d3.dis();
}
