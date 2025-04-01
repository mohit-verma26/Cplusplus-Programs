#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    int rollno;
    class address
    {
        int house;
        char city[10];
        char state[20];
    public:
        int get_add(int h,char *c,char *s)
        {
            house=h;
            strcpy(city,c);
            strcpy(state,s);
        }
        int show_add()
        {
            cout<<house;
            cout<<city;
            cout<<state;
        }
    };
public:
    address add;
    int get_data(char *n,int r,int hh, char *cc,char *ss)
    {
        strcpy(name,n);
        rollno=r;
        add.get_add(hh,cc,ss);
    }

    int show_data()
    {
        cout<<name<<rollno;
        add.show_add();
    }
};
int main()
{
    student s1;
    s1.get_data("mohit",74,156,"bhopal","m.p.");
    s1.show_data();
}
