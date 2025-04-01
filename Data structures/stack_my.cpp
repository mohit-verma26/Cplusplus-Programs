#include<iostream>
using namespace std;
struct stack_node
{
    public:
    int top;
    int capacity;

    int *array;
};
stack_node* createstack(int n)
{
    stack_node* stack=new stack_node;
    stack->capacity=n;
    stack->top=-1;
    stack->array=new int[stack->capacity];
    return stack;
}
int is_full(stack_node *stack)
{
    if(stack->top==stack->capacity-1)
        return 1;
    else
        return 0;
}
int is_Empty(stack_node *stack)
{
    if(stack->top==-1)
    {
        return 1;
    }
    else
       return 0;
}
int push(stack_node *stack,int data)
{
    if(!is_full(stack))
    {
        stack->top++;

        stack->array[top]=data;
    }
}
int pop(stack_node *stack)
{
    int data;
    if(!is_Empty(stack))
    {
        data=stack->array[stack->top];
        stack->top--;
        return data;
    }
    return (-1);
}

int main()
{
    int choice,item;
    stack_node *stack;
    stack=createstack(4);
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
                push(stack,item);
                break;
            case 2:
                item=pop(stack);
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
                    cout<<stack->array[i];
                }


        }
    }
}
