#include<iostream>
using namespace std;
class arrayy
{
    int arr[5];
protected:
    int set_input(int index, int value)
    {
        arr[index]=value;
    }
public:
    int show_data(int inn)
    {
        cout<<arr[inn];
    }
};
class stackk: public arrayy
{
public:
    int set_stackk(int in,int val)
    {
        set_input(in,val);
    }
};
int main()
{
    stackk s1;
    s1.set_stackk(2,5);
    s1.show_data(2);
}
