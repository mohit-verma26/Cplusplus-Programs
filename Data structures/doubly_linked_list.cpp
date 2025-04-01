#include<iostream>
using namespace std;
struct node
{
    int data;
    node *prev,*next;
};
class dblist
{
    node *head;
    node *tail;
public:
    dblist()
    {
        head=NULL;
        tail=NULL;
    }
    int add_node(int n)
    {
        node* temp=new node;
        temp->data=n;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
        }
    }
    int display()
    {
        node* temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    int insert_node_at_head(int n)
    {
        node* temp=new node;

        temp->data=n;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        {
            cout<<"list is empty ";
        }
        else
        {

            head->prev=temp;
            temp->next=head;
            head=temp;
            cout<<"it worked";

        }
    }
};
int main()
{
    dblist l1;
    l1.add_node(1);
    l1.add_node(22);
    l1.add_node(333);
    l1.display();
    l1.insert_node_at_head(4444);
    l1.display();

}
