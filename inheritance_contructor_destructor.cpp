#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int z)
    {
        a=z;
        cout<<a<<" ";
    }
    ~A()
    {

    }
};
class B: public A
{
    int b;
public:
    B(int x, int y):A(y)
    {
        b=x;
        cout<<b;
    }
    ~B()
    {

    }
};
int main()
{
    B b1(2,3);
}

