#include<iostream>
using namespace std;
int swapp(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x,y;
    cout<<"Enter the value of x and y :- "<<endl;
    cin>>x>>y;
    cout<<"Values of x and y is :-";
    cout<<x<<endl;
    cout<<y<<endl;
    swapp(x,y);
    cout<<"Values of x and y after swapping:- "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
}
