#include<iostream>
using namespace std;
class integer
{
    int a;
public:
    int set_data(int x)
    {
        a=x;
    }
    int show_data()
    {
        cout<<a<<endl;
    }
    integer operator ++()
    {
        integer i;
        i.a=++a;
        return(i);
    }
    integer operator ++(int)
    {
        integer i;
        i.a=a++;
        return(i);
    }
};
int main()
{
    integer c1,c2,c3;
    c1.set_data(5);
    c1.show_data();
    c2=c1++;
    c3=++c1;
    c2.show_data();
    c3.show_data();
    return 0;
}
