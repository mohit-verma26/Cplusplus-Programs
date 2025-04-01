#include<iostream>
#include<string.h>
using namespace std;
int swap(char *x,char *y)
{
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
    return 0;
}
int permutation(char *s,int i, int n)
{
    static int count;
    int j;
    if(i==n)
    {
        count++;
    cout<<count<<","<<s<<" ";}
    else
        for(j=i;j<=n;j++)
    {
        swap((s+i),(s+j));
        permutation(s,i+1,n);
        swap((s+i),(s+j));
    }
    return 0;
}
int main()
{    char str[20];
    cout<<"Enter the string";
    gets(str);cout<<endl;
    puts(str);
    cout<<strlen(str)-1;
    permutation(str,0,strlen(str)-1);
}
