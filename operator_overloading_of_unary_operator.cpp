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
    friend neww operator -(neww);
    int show_data()
    {
        cout<<a<<" "<<b<<endl;
    }
};
neww operator -(neww n1)
{
    neww n;
    n.a=-n1.a;
    n.b=-n1.b;
    return(n);
}
int main()
{
    neww f1,f2,ff;
    f1.set_date(3,6);
    f2.set_date(4,6);
    ff=-f2;
    ff.show_data();
    return 0;
}

