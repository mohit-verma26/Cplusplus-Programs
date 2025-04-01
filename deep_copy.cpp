#include<iostream>
using namespace std;
class cop
{
    int a,b;
    int *p;
public:
    cop()
    {
        p=new int;
    }
    int set_data(int x, int y, int z)
    {
        a=x;b=y;*p=z;
    }
    int show_data()
    {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }
    cop(cop &c)
    {
        a=c.a;
        b=c.b;
        p=new int;
        *p=*(c.p);
    }
    ~cop()
    {
        delete p;
    }
};
int main()
{
    cop c1;
    c1.set_data(2,3,5);
    c1.show_data();
    cop c2=c1;
    c2.show_data();
}
