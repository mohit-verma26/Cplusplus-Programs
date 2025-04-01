#include<iostream>
using namespace std;
class complexx2;
class complexx1
{
    int a;
    public:
    int set_data(int x)
    {
        a=x;
    }
    friend int sum(complexx1,complexx2);
};
class complexx2
{
    int b;
    public:
    int set_data(int x)
    {
        b=x;
    }
    friend int sum(complexx1,complexx2);
};
int sum(complexx1 a, complexx2 b)
{
    cout<<"sum is a and b is :- "<<a.a+b.b<<endl;
}
int main()
{
    complexx1 ob1;
    complexx2 ob2;
    ob1.set_data(3);
    ob2.set_data(5);
    sum(ob1,ob2);
    complexx1 ob3;
    complexx2 ob4;
    ob3.set_data(6);
    ob4.set_data(7);
    sum(ob3,ob4);
    return 0;
}
