#include<iostream>
using namespace std;
class complexx
{
    int a,b;
public:
    set_input(int x,int y)
    {
        a=x;
        b=y;
    }
    int show_data()
    {
        cout<<a<<" "<<b<<endl;
    }
    complexx operator +(complexx c)
    {
        complexx temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    complexx c1,c2,cf;
    c1.set_input(6,9);
    c1.show_data();
    c2.set_input(2,5);
    c2.show_data();
    cf=c1+c2;
    cf.show_data();
    return 0;
}
