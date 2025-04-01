#include<iostream>
using namespace std;
class car
{
public:
    virtual int no_of_gears(int x)
    {
        cout<<x<<" of car"<<endl;
    }
    int no_of_silencer(int x)
    {
        cout<<x<<" of car"<<endl;
    }
};
class sportscar: public car
{
public:
    int no_of_gears(int x)//method_overriding
    {
        cout<<x<<" of sportscar"<<endl;
    }
    int no_of_silencer()//method_hiding
    {
        int x;
        cout<<x<<" of sportscar"<<endl;
    }
    int no_of_tyre()
    {
        cout<<"4";
    }
};
int main()
{
    sportscar s1;
    car *p,s2;
    p=&s1;
    p->no_of_gears(6);

    return 0;
}
