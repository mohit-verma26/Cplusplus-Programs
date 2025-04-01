#include<iostream>
using namespace std;
class person
{
public:
    virtual int no()=0;
    int a=2;
};
class student: public person
{
public:
    int no()
    {
        cout<<"value of a:- "<<a;
    }
};
int main()
{
    student *p,s1;
    p=&s1;
    p->no();
}
