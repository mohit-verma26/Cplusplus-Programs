#include<iostream>
using namespace std;
class queuee
{
public:
    int frontt,rear,sizee;
    int capacity;
    int* arrayy;
};
queuee* create_Q(int capacity)
{
    queuee* Q=new queuee();
    Q->capacity=capacity;
    Q->frontt=Q->sizee=0;
    Q->rear=capacity-1;
    Q->arrayy=new int[Q->capacity];


    return Q;
}
int isempty(queuee* Q)
{
    return(Q->sizee==0);
}
int isfull(queuee* Q)
{
    return(Q->sizee==Q->capacity);
}
int inQ(queuee* Q,int data)
{
    if(isfull(Q))
        cout<<"Queue is full";
    else
        {Q->rear=(Q->rear+1)%Q->capacity;
        Q->arrayy[Q->rear]=data;
        Q->sizee=Q->sizee+1;
        cout<<data<<" is inserted to the queue."<<endl;}
}
int deQ(queuee* Q)
{
    if(isempty(Q))
       {
        cout<<"queue is empty";
        }
        else
        {
    int data=Q->arrayy[Q->frontt];
    Q->frontt=(Q->frontt+1)%Q->capacity;
    Q->sizee=Q->sizee-1;
    return data;
        }
}
int display(queuee* Q)
{
    cout<<endl;
    if(isempty(Q))
    {
        cout<<"queue is empty";}
        else
        {
    for(int i=0;i<Q->sizee;i++)
    {
        cout<<Q->arrayy[i]<<" ";
    }
}
}
int main()
{
    int capacity;
    queuee* Qe=create_Q(4);
    inQ(Qe,1);
    inQ(Qe,22);
    inQ(Qe,333);
    inQ(Qe,4444);
    inQ(Qe,55555);
    display(Qe);
}
