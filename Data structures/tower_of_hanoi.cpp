#include<iostream>
using namespace std;
int TOH(int n, char from_rod,char aux,char to_rod)
{
    if(n==0)
    {
        cout<<"move disk 1 FROM ROD "<<from_rod<<" to TO ROD "<<to_rod<<endl;
        return 0;
    }
    TOH(n-1,from_rod,aux,to_rod);
    {cout<<"move disk "<<n<<" FROM ROD "<<from_rod<<"TO ROD "<<to_rod<<endl;}
    TOH(n-1, aux,to_rod, from_rod);
}
int main()
{
    int n=3;
    TOH(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
