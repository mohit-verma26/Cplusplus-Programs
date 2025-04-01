#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    char c[20];
    string s1={"mohit"},s2;
    gets(c);
    getline(cin,s2);
    cout<<s1<<endl;
    cout<<c<<endl;
    cout<<s2<<endl;
    s1.push_back('V');
    cout<<s1<<endl;
    cout << "The capacity of string is : ";
    cout << s1.capacity() << endl;
    s1.shrink_to_fit();
    cout << s1.length() << endl;
    s1=s1+" "+c;
    cout<<s1<<endl;
    s1.assign(c);
    cout<<s1<<endl;
    s1.append(" mohit");
    cout<<s1<<endl;
    s1.insert(6,"great ");
    cout<<s1<<endl;
    s1.replace(0,5,"mohit");
    s1.replace(12,5,"verma");
    cout<<s1<<endl;
    cout<<(int)s1.find("great");
    cout<<endl;
    strcpy(c,s1.c_str());//from string to character array
    cout<<(int)s1.compare(c);
    cout<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<c<<endl;


}
