#include<iostream>
using namespace std;
int getar()
{
    int arr[10],i,b,sum=0;
    cout<<"Enter the value of Elements";
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"sum :- "<<sum<<endl;

    for(i=0;i<b;i++)
    {
        cout<<"Entered elements are :- ";
        cout<<arr[i]<<endl;
    }

}


int main()
{
    getar();

}
