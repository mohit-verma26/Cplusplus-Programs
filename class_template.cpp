#include<iostream>
using namespace std;
template <class z>class arraylist
{
    struct controlblock
    {
        int capacity;
        z *ptr_arr;
    };
    controlblock *s;
public:
    arraylist(int capacity)
    {
        s=new controlblock;
        s->capacity=capacity;
        s->ptr_arr=new z[s->capacity];
    }
    int add_element(int index, z data)
    {
        if(index>=0&&index<=s->capacity-1)
            s->ptr_arr[index]=data;
        else
            cout<<"invalid array";
    }
    int show_element(int index)
    {
        if(index>=0&&index<=s->capacity-1)
            cout<<s->ptr_arr[index]<<endl;
        else
            cout<<"invalid array";
    }
    int show_list()
    {
        int i;
        for(i=0;i<=s->capacity-1;i++)
        {
            cout<<s->ptr_arr[i]<<endl;
        }
    }
};
int main()
{
    arraylist <int>list1(4);
    arraylist <float>list2(2);
    list1.add_element(0,5);
    list1.add_element(1,10);
    list1.add_element(2,15);
    list1.add_element(3,20);
    list1.show_element(0);
    list1.show_element(1);
    list1.show_list();
    list2.add_element(0,0.5);
    list2.add_element(1,1.5);
    list2.show_element(0);
    list2.show_element(1);
    list2.show_list();
    return 0;
}
