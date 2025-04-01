#include<iostream>
using namespace std;
class con
{
    int a,b;
public:
    int set_data(int x)
    {
        a=x;
    }
    int show_data()
    {
        cout<<a;
    }
    operator int()
    {
        return(a);
    }

};
int main()
{
    con c1,c2;
    int z,m;
    c1.set_data(2);
    c2.set_data(5);
    z=c1;
    m=c2;
    cout<<z;
    cout<<m;
}
