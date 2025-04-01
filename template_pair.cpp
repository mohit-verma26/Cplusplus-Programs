#include<iostream>
#include<string.h>
using namespace std;
class capital
    {
        char c1[10];
        char c2[10];
        public:
        int get_cap(char *cc1,char *cc2)
        {
            strcpy(c1,cc1);
            strcpy(c2,cc2);
        }
        int show_cap()
        {
            cout<<c1;
            cout<<c2;
        }
    };
int main()
{

    pair <string,string> p1,p2;
    pair <string,capital>p3;
    capital a1;
    a1.get_cap("mumbai","nagpur");

    p1=make_pair("M.P.","Bhopal");
    p2=make_pair("Rajasthan","Jaipur");
    p3=make_pair("Maharashtra",a1);
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" ";
    a1.show_cap();



}
