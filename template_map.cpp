#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <int,string> cus;
    cus[100]="mohit";
    cus[123]="raghu";
    cus[145]="prakhar";
    cus[171]="gopu";
    cus[200]="gang15";
    map <int,string>::iterator it;
    for(auto it=cus.begin();it!=cus.end();it++)
    {
        cout<<it->first<<" ";
        cout<<it->second<<endl;
    }cout<<endl;
    cus.insert(pair<int,string>(250,"pulkeet"));
    for(auto it=cus.begin();it!=cus.end();it++)
    {
        cout<<it->first<<" ";
        cout<<it->second<<endl;
    }
}
