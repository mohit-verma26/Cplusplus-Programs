#include<iostream>
using namespace std;
int bin(char *s,int n)
{

    if(n<1)
    {

        cout<<s<<" ";
    }
    else
    {
        s[n-1]='0';
        bin(s,n-1);
        s[n-1]='1';
        bin(s,n-1);
    }
}

int main()
{

    char str[11];
    bin(str,10);

}
