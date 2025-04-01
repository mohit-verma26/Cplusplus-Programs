#include<iostream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    char m[10]{"Verma"};
    string s;
    getline(cin,s);

    cout<<m;
    m[0]=toupper(m[0]);

    cout<<s;

}
