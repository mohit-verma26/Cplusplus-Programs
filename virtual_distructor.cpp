#include<iostream>
using namespace std;
class car
{
    int a;
public:
    int f1()
    {
        cout<<"inside f1 of car";
    }
    virtual ~car(){}
};
class sportscar: public car
{
    int b;
public:
    int f2()
    {
        cout<<"inside f1 of sportscar";
    }
    ~sportscar(){}
};
int vdis()
{
    car *p= new sportscar;
    p->f1();
    delete p;

}
int main()
{
    vdis();
}
