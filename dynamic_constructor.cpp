#include<iostream>
using namespace std;
class experi
{
    int a,b;
    int *p;
public:
    experi()
    {
        a=0;b=0;p=new int;
    }
    experi(int x, int y, int z)
    {
        a=x;b=y;
        p=new int;
        *p=z;
    }
    int show_data()
    {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }
};
int main()
{
    experi e1,e2(2,3,5);
    e1.show_data();
    e2.show_data();
}
