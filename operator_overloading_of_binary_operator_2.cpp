#include<iostream>
#include<conio.h>
using namespace std;
class neww
{
    int a,b;
public:
    int set_date(int x, int y)
    {
        a=x;b=y;
    }
    neww operator +(neww n2)
{
    neww n;
    n.a=a+n2.a;
    n.b=b+n2.b;
    return(n);
}
    int show_data()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    neww f1,f2,ff;
    f1.set_date(3,6);
    f2.set_date(4,6);
    ff=f1+f2;
    ff.show_data();
}
