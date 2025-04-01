#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int x, int y)
    {
        a=x;b=y;
    }
    complex(int x)
    {
        a=x;
        b=0;

    }
    complex()
    {

    }
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }
    int show_data()
    {
        cout<<a<<b<<endl;
    }
};

int main()
{
complex c1(4,6),c2(5),c3,c4(c1);
c1.show_data();
c2.show_data();
c3.show_data();
c4.show_data();
cout<<complex(7);

}
