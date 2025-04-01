#include<iostream>
using namespace std;
class car
{
public:
    int no_of_gears(int x)
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
};
int main()
{
    sportscar s1;
    car c1;
    s1.no_of_gears(6);
    s1.no_of_silencer();
    c1.no_of_gears(5);
    return 0;
}
