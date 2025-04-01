// C++ code to demonstrate star pattern
#include <iostream>
#include<string>
using namespace std;

int pyramid(string s)
{

    int k=s.length();
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<" ";
        }
        k--;
        for(int j=0;j<i;j++)
        {
            cout<<s.at(j);
        }
        cout<<s.at(i);
         for(int j=i-1;j>=0;j--)
        {
            cout<<s.at(j);
        }


        cout<<endl;
    }
}

int main()
{
	string s1{};
	getline(cin,s1);
	pyramid(s1);
	return 0;
}
