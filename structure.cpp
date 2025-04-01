#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct customer
{
    int id,age;
    char name[10];

    int input()
    {
        cout<<"Enter the values of 4th customer :- ";
        cin>>id>>age>>name;
    }
    int display()
    {
        cout<<name<<" "<<id<<" "<<age<<endl;
    }

};


struct customer input()
{
    struct customer c;
    cout<<"Enter the values of 5th customer :- ";
    cin>>c.id>>c.age>>c.name;
    return(c);
}

int display(customer cc)
{
    cout<<cc.name<<" "<<cc.id<<" "<<cc.age<<endl;
}


int main()
{
    struct customer c1,c2={2,21,"Mohit"},c3,c4,c5;
    c1.id=1;
    c1.age=18;
    strcpy(c1.name,"Sandesh");
    cout<<c1.name<<" "<<c1.id<<" "<<c1.age<<endl;
    cout<<c2.name<<" "<<c2.id<<" "<<c2.age<<endl;
    c3=c1;
    cout<<c3.name<<" "<<c3.id<<" "<<c3.age<<endl;
    c3.input();
    c3.display();
    c4=input();
    display(c4);
}
