#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int a,b=1,k;
    a=n-1;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<a;j++)
        {
            cout<<" ";
        }

        for(k=0;k<b;k++)
        {
            cout<<"#";
        }cout<<endl;
        a--;
        b++;
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

