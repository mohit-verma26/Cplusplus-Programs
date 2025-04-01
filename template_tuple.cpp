#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <string,string,int> t1,t2;
    t1=make_tuple("Mohit","Verma",21);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" "<<endl;
    cout<<tuple_size<decltype(t1)>::value<<endl;
    string a,b;
    int t;
    tie(a,b,t)=t1;
    cout<<a<<b<<t;


}
