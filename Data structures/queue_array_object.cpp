#include<iostream>
using namespace std;
class queuee
{
public:
    int frontt,rear,sizee;
    int capacity;
    int* arrayy;
};
class queuee_big
{
    public:
queuee_big(int cap)
{
    queuee* Q=new queuee;
    Q->capacity=cap;
    Q->frontt=Q->sizee=0;
    Q->rear=Q->capacity-1;
    Q->arrayy=new int[Q->capacity];
}

int isempty( queuee* Q)
{

    return(Q->sizee==0);
}
int isfull(queuee* Q)
{

    return((Q->sizee == Q->capacity));

}
int inQ(int data)
{

    queuee* Q;

    if(isfull(Q)){
        cout<<"Queue is full";

        }
    else
      {
        Q->rear=(Q->rear+1)%Q->capacity;
        Q->arrayy[Q->rear]=data;
        Q->sizee=Q->sizee+1;
        cout<<data<<" is inserted to the queue."<<endl;

      }
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
int display()
{
cout<<endl;
    queuee* Q;
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
};
int main()
{


    queuee_big q1(4);
     q1.inQ(1);
    q1.inQ(22);
    q1.inQ(333);
    q1.inQ(4444);
    q1.inQ(55555);
    q1.display();
}
