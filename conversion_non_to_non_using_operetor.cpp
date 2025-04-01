#include<iostream>
using namespace std;
class item
{
    int a,b;
public:
    int show_data()
    {
        cout<<a<<" "<<b;
    }
    int geta(int x)
    {
        a=x;

    }
    int getb(int y)
    {
        b=y;

    }
};
class product
{
    int m,n;
public:
    int get_data(int x, int y)
    {
        m=x;n=y;
    }

     operator item()
    {
        item temp;
        temp.geta(m);
        temp.getb(n);
        return (temp);
    }
};


int main()
{
    item i1;
    product p1;
    p1.get_data(2,3);
    i1=p1;
    i1.show_data();
}
