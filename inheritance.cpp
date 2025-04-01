#include<iostream>
using namespace std;
class car
{
    int tyre,gear;
public:
    int set_data(int x, int y)
    {
        tyre=x;
        gear=y;
    }
    int show_data()
    {
        cout<<tyre<<" "<<gear;
    }
};
class super_car: public car
{
    int speed,price;
public:

    int set_data1(int x , int y)
    {
        speed=x;
        price=y;
    }
    int show_data1()
    {
        cout<<speed<<" "<<price;
    }
};
int main()
{
    super_car s1;
    s1.set_data(1,2);
    s1.set_data1(3,4);
    s1.show_data();
    s1.show_data1();
    return 0;
}
