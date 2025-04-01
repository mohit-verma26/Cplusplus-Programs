#include<iostream>
using namespace std;
class complexx
{
    int a,b;
    public:
        int get_data(int x, int y)
        {
            a=x;b=y;
        }
        int show_data()
        {
            cout<<a<<" "<<b<<endl;
        }
        complexx add(complexx c)
        {
            complexx temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return(temp);
        }
};

int main()
{
    complexx c1,c2,c3;
    c1.get_data(3,5);
    c1.show_data();
    c2.get_data(5,3);
    c2.show_data();
    c3=c2.add(c1);
    c3.show_data();
    return 0;
}
