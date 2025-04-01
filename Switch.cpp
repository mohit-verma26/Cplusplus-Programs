#include<iostream>
using namespace std;
int main()
{
int ch;
cout<<"Enter the number";
cin>>ch;
if(ch>=0 && ch<=4)
{
switch(ch)
{
case 1:
factorial();break;
case 2:
cout<<"You have entered 2";break;
/*case 3:
prime no();break;
case 4:
palindrom();break;
*/default : cout<<" Invalid choice.... Enter valid choice";
}

}

else
{
cout<<"Invalid choice.... Enter valid choice";
}
int factorial();
{
int j,n,h,m;
cout<<"Enter the Factorial no.";
cin>>n;
m=n-1;
for(j=m;j>0;j--)
{
n=n*m;
m--;
}
cout<<"Factorial of no. is"<<n;
return 0;
};


}
