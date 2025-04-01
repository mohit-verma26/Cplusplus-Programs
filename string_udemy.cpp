#include<iostream>
#include<string>
using namespace std;
int main()
{
    string alpha{"abcdefghijklmnopqrstuvwxyz"};
    string key{"jfaidfggiwjemsvxcnrewseirg"};
    string s;
    string ens;
    string dec;
    getline(cin,s);
    for(char c:s)
    {
        int pos=alpha.find(c);
        if(pos!=string::npos)
        {
            ens+=key.at(pos);
        }
        else
        {
            ens.push_back(c);
        }
    }
    cout<<ens<<endl;
s.erase();
    for(char c: ens)
    {

        int pos=key.find(c);
        if(pos!=string::npos)
        {
            s+=alpha.at(pos);
        }
        else
        {
            s.push_back(c);
        }
    }
    cout<<s;
}
