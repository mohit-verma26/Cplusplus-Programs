#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,a;
    vector <int> ar;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        ar.push_back(a);
    }
   for( auto it=ar.begin();it!=ar.end();++it)
   {
       cout<<*it;
   }

   cout<<endl<<ar[2];
    return 0;

}
