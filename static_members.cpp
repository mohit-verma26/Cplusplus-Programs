#include<iostream>
#include<conio.h>
using namespace std;
class account
{
private:
    int balance;
    float roi;
public:
    int set_bal(int b)
    {
        balance=b;
    }
    static float set_roi(float r)
    {
        roi=r;
    }
    int show_bal()
    {
        cout<<balance<<endl;
    }
    static float show_roi()
    {
        cout<<roi<<endl;
    }
};
float account::roi=3.05;
int main()
{
    account a1;
    a1.set_bal(11);
    a1.show_bal();
    account::set_roi(8);
    account::show_roi();
}
