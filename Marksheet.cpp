#include<iostream>
using namespace std;
int inputdetial()
{
    string sub[4][10]={"MATHS","CHEMISTRY","PYHSICS","ENGLISH","CS"};
    char name[20];
    int rolln;
    cout<<"Enter the Name of Student:- ";
    cin>>name;
    cout<<"Enter the Roll Number of the Student:- ";
    cin>>rolln;
    cout<<"First subject is :- ";
    cout<<sub[0];

}
int main()
{
    inputdetial();
}
