#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int> l1{1,2,3},l3{11,22,33};
    list<string> l2{"india","germany"};
    list <int>::iterator it;

    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it;
    }
    list <string>::iterator it2;
    for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it;
    }
    for(auto it=l3.begin();it!=l3.end();it++)
    {
        cout<<*it;
    }
    cout<<l1.size();
    cout<<l2.size();
    cout<<l3.size();
    l3.remove(33);
    for(auto it=l3.begin();it!=l3.end();it++)
    {
        cout<<*it;
    }
}
