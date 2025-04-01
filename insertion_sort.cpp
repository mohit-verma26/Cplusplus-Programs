#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,n,key,z=i+2;
    int ar[10];
    cout<<"Enter the number of elements in array"   <<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"array is :- ";
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<n;i++)
    {
        key=ar[i];
        for(j=i-1;j>=0;j--)
        {
            if(key<ar[j])
            {

                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
             }
            cout<<key<<" "<<ar[i]<<" "<<ar[j]<<endl;
        }
    }
    cout<<"array after sorting is :- "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
