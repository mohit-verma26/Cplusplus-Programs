#include<iostream>
using namespace std;
int area(int a, int b)
{
    return(a*b);
}
int area(int a)
{
    return(a*a);
}
int main()
{
    int x,y;
    cout<<"Enter the length and breadth :- ";
    cin>>x>>y;
    cout<<area(x,y)<<endl;
    cout<<"Enter the radius :- ";
    cin>>x;
    cout<<area(x);
    return 0;
}
