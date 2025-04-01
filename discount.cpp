#include <iostream>
using namespace std;

float CD (float arr[], int n)
{
    int price;
    cout<<" enter the price: ";
    cin>>price;


for(int i=0;i<n;i++)
{
    cout<<arr[i];
    float afterDiscount = price*(price-arr[i])/100;


	std::cout << "After discount your bill is: " << afterDiscount<<endl;
}
}
int main()
{
	int num=0;


	cout << "Enter the num";

	cin >> num;
float bill[num];

for(int i=0;i<num;i++)
{
	cout << "Enter nom. of bills ";
	cin >> bill[i];
	cout<<bill[i];
}

   CD(bill,num);
}
