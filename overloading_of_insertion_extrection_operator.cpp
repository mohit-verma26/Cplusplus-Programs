#include<iostream>
#include<conio.h>
using namespace std;
class opr
{
    int a,b;
public:
    int set_data(int x, int y)
    {
        a=x;b=y;
    }
    friend ostream &operator <<(ostream&, opr );
    friend istream &operator >>(istream&, opr &);
};
ostream& operator <<(ostream &os, opr o)
{
    cout<<o.a<<" "<<o.b;
    return(os);
}
istream& operator >>(istream &is, opr &o)
{
    cin>>o.a>>o.b;
    return(is);
}
int main()
{
    cout<<"enter the number "<<endl;
    opr c1;
    cin>>c1;
    cout<<"numbers are "<<endl;
    cout<<c1;
    return 0;
}
