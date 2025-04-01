#include<iostream>
using namespace std;
class box
{
    int l,b,h;
public:
    int set_dimen(int l, int b, int h)
    {
        this->l=l;this->b=b;this->h=h;
    }
    int show_dimen()
    {
        cout<<l<<b<<h;
    }
};
int main()
{
    box *p,smallbox;
    p=&smallbox;
    p->set_dimen(5,9,4);
    smallbox.show_dimen();
}
