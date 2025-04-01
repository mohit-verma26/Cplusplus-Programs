#include<iostream>
#include<conio.h>
using namespace std;
int add();
int anr()
{
int sum;

     sum=add();
     cout<<sum;
     getch();
     return 0;
}

int add()
    {

    int x,y;
     cout<<"Enter the Values :- ";
     cin>>x>>y;
        return(x+y);


    }
int main()
{
    anr();
}
