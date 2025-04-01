#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int i,max=a;

    for(i=0;i<4;i++)
    {
        if(max<b)
        {
            max=b;
        }
        else if(max<c)
        {
            max=c;
        }
        else if(max<d)
        {
            max=d;
        }
        else
        {

        }
    }
    return max;

}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}

