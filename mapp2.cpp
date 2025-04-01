#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    map<string, int> phn_book;
    for(int i=0;i<n;i++)
    {
        int no;
        string name;
        cin>>name;
        cin>>no;
        phn_book.insert(pair<string,int>(name,no));

    }

    for(int i=0;i<phn_book.size();i++)
    {
        string name;
        cin>>name;
        if(phn_book.find(name)!=phn_book.end())
        {
            cout<<name<<"="<<phn_book.find(name)->second<<endl;
        }
        else
        {cout<<"Not found"<<endl;}
    }
    return 0;
}

