#include<iostream>
using namespace std;
namespace mys{
int a,b;
int funn();
class cls
{
    public:
    int coutt()
    {
        cout<<"inside the class";
    }
};
}
using namespace mys;
int mys::funn()
{
    cout<<"inside the funn function";
}
int main()
{
    a=2;
    b=3;
    cls cl;
    cl.coutt();
    funn();
    cout<<a<<b;

}
