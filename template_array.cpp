#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a1,a2;

    for(int i=0;i<a1.size();i++)
    {
        cin>>a1[i];
    }
    cout<<a1.max_size()<<endl;
    for(int i=0;i<a1.size();i++)
    {
        cout<<a1[i];
    }
    cout<<a1.size()<<endl;
    a2.fill(101);
    for(int i=0;i<a2.size();i++)
    {
        cout<<a2[i];
    }
    cout<<endl;
    a1.swap(a2);
    for(int i=0;i<a1.size();i++)
    {
        cout<<a1[i];
    }
     for(int i=0;i<a2.size();i++)
    {
        cout<<a2[i];
    }
    cout<<endl;

}
