#include<iostream>
using namespace std;
class pre
{
    int a,b;
public:
    int set_data(int x, int y)
    {
        a=x;b=y;
    }
    int show_data()
    {
        cout<<a<<" "<<b<<endl;
    }
    pre(int z)
    {
        a=z;
        b=0;
    }
    pre(){}
};
int main()
{
    pre p1;
    int f=5;
    p1=f;
    p1.show_data();
}
