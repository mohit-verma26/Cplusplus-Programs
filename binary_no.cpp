#include <bits/stdc++.h>

using namespace std;



int main()
{
    int count=0;
    int bn[10];
    int n,i=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
        bn[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>0;j--)
    {
        if(bn[j]==1)
        {

         count++;
        }
        else
        {
           j=0;
        }

    }
    cout<<count;
    return 0;
}
