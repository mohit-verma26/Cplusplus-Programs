#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <float> v1{1,2,3};
    vector <char> v2(5);
    cout<<v1.capacity()<<endl;
    cout<<v2.capacity()<<endl;
    v1.push_back(4);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    cout<<endl;
    cout<<v1.capacity()<<endl;
    v1.push_back(5);
    cout<<v1.capacity()<<endl;
    v1.shrink_to_fit();
    cout<<v1.capacity()<<endl;
    cout<<v1.front();
    cout<<v1.back()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    vector <float>::iterator it=v1.begin();
    v1.insert(it+2,2.5);
    cout<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    cout<<endl<<v1.capacity()<<endl;
    for (auto it = v1.begin(); it < v1.end(); it++)
        cout << *it << " ";


}
