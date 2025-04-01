#include<iostream>
using namespace std;
struct arrstack
{
    int top;
    int capacity;
    int *arr;
};
struct arrstack *createstack(int cap)
{
    struct arrstack *s;
    s=new arrstack;
    s->capacity=cap;
    s->top=-1;
    s->arr=new int[s->capacity];
    return (s);
};
int isFull(arrstack *s)
{
    if(s->top==s->capacity-1)
        return 1;
    else
        return 0;
}
int isEmpty(arrstack *s)
{
    if(s->top==-1)
        return 1;
    else
        return 0;
}
int push(struct arrstack *s,int item)
{
    if(!isFull(s))
    {
        s->top++;
        s->arr[s->top]=item;
    }
}
int pop(struct arrstack *s)
{
    int item;
    if(!isEmpty(s))
    {
        item=s->arr[s->top];
        s->top--;
        return item;
    }
    return (-1);
}

int main()
{
    int choice,item;
    struct arrstack *s;
    s=createstack(4);
    while(1)
    {
        cout<<"push"<<endl;
        cout<<"pop"<<endl;
        cout<<"exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the number";
                cin>>item;
                push(s,item);
                break;
            case 2:
                item=pop(s);
                if(item==-1)
                    {cout<<"stack is empty";}
                else
                    cout<<"poped value is:- "<<item;
                    break;
            case 3:
                exit(0);
            case 4:
                for(int i=0;i<4;i++)
                {
                    cout<<s->arr[i];
                }


        }
    }
}

