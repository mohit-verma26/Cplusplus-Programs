#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int arr[200],k=0,i;
    float p=0,o=0,n=0;
    float rp,ro,rn;
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<k;i++)
    if(arr[i]>0)
    {
        p++;
        cout<<p;
    }
    else if(arr[i]<o)
    {
        n++;
        cout<<n;

    }
    else if(arr[i]==0)
    {
        o++;
        cout<<o;
    }
    else
    {

    }
    cout<<p<<n<<o<<endl;
    rp=p/k;
    ro=o/k;
    rn=n/k;
    cout<<fixed<<setprecision(6)<<rp<<endl<<rn<<endl<<ro;
    return 0;
}

