#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the values of a and b :-";
    int a,b;
    int x;
    cin>>a>>b;
    try{
        if(a!=b)
            {x=(a/(a-b));
            cout<<x;}
        else
            {throw 5;}
    }
    catch (int )
    {
        cout<<" Try again"<<endl;
        cout<<"catched value is";
    }
    return 0;
}
