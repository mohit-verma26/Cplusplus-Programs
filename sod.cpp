#include<iostream>
using namespace std;


 int main()
{
    int no, a, sum = 0;
    cout<<"\nEnter any number: ?\b";
    cin>>no;
    while (no > 0)
    {
        a = no % 10;
        no /= 10;
        sum = sum*10 + a;
    }
    cout<<"\nThe sum of digits is: "<<sum;
    cout<<"\nPress any key to continue......";
    cin.ignore();
    cin.get();
}

