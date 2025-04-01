#include<iostream>
using namespace std;
int dmm()
{
    int ar[2][2],i,j,sum=0;
                cout<<"Enter the values in array :- "<<endl;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
           {
            cin>>ar[i][j];

           }
    }


    for(i=0;i<2;i++)
    {cout<<"Values of  Array of  row is :- "<<endl;
        for(j=0;j<2;j++)
            {cout<<ar[i][j]<<endl;
                         sum=sum+ar[i][j];
}
                cout<<"Sum of the Array is :- ";
    cout<<sum<<endl;
    sum=0;
    }

   int min=ar[0][0];
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
           {
                if(ar[i][j]<min)
                {
                   min=ar[i][j];
                }
           }
    }
    cout<<min;
}


int main()
{
    dmm();
}
