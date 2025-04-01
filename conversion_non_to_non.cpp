#include<iostream>
using namespace std;
class product
{
    int m,n;
public:
    int get_data(int x, int y)
    {
        m=x;n=y;
    }
    int getm()
    {
        return m;
    }
    int getn()
    {
        return n;
    }
};
class item
{
    int a,b;
public:
    int show_data()
    {
        cout<<a<<" "<<b;
    }
    item(product p)
    {
        a=p.getm();
        b=p.getn();
    }
    item(){}
};

int main()
{
    item i1;
    product p1;
    p1.get_data(2,3);
    i1=p1;
    i1.show_data();
}
