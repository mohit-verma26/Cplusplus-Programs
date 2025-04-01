#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list
{
    node *head;
    node *tail;
public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    int add_node(int n)
    {
        node *temp=new node;
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
        return 0;
    }
    int delete_node()
        {
            node *temp;
            if(head==NULL)
            {
                cout<<"list is empty";
            }
            else
            {
                temp=head;
                head=head->next;
                free(temp);
            }
        }
        int display_list()
        {
            node *temp;
            temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        node* get_head()
        {
            return head;
        }
        static int concatinate(node *a, node *b)
        {
            if(a!=NULL&&b!=NULL)
            {
                if(a->next==NULL)
                    {
                        a->next=b;
                    }
                else
                {
                    concatinate(a->next,b);
                }
            }
            else
            {
                cout<<"Either of a linked list is empty";
            }
        }
};
int main()
{
    linked_list l1;
    l1.add_node(1);
    l1.add_node(22);
    l1.add_node(333);
    l1.add_node(4444);
    l1.display_list();
    linked_list l2;
    l2.add_node(55555);
    l2.add_node(666666);
    linked_list::concatinate(l1.get_head(),l2.get_head());
    l1.display_list();
}
