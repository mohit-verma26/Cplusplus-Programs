#include<iostream>
using namespace std;
int swapp(int *a, int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
   return(*a);
}

int main()
{
    int x,y,c;
    cout<<"Enter the value of x and y :- "<<endl;
    cin>>x>>y;
    cout<<"Values of x and y before swapping :-"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    c=swapp(&x,&y);
    cout<<c<<endl;
    cout<<"Values of x and y after swapping :-"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

}
