#include<iostream>
#include<vector>
#include<memory>
using namespace std;

class Test
{
    int data;
public:
    Test(int data=0):data{data}
    {
        cout<<"Test constructor "<<data<<" "<<endl;
    }
    int get_data() const
    {
        return data;
    }
    ~Test(){cout<<"Test Destructor "<<data<<" "<<endl;}
};

    unique_ptr <vector<shared_ptr<Test>>> make()
    {
        return make_unique<vector<shared_ptr<Test>>>();
    }
    void fill(vector<shared_ptr<Test>> &vec,int num)
    {
        int temp{};
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the data point :- ";
            cin>>temp;
            shared_ptr<Test> ptr=make_shared<Test>(temp);
            vec.push_back(ptr);
           // vec.push_back(make_shared<Test>(temp));
        }
    }
    void display(const vector<shared_ptr<Test>> &vec)
    {
        for(const auto vecc: vec)
        {
            cout<<vecc->get_data()<<endl;
        }
    }

int main()
{
   /* Test m1;
    cout<<m1.get_data();*/
    int num{};
    unique_ptr <vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr=make();
    cout<<"How many values do you want to enter :- ";
    cin>>num;
    fill(*vec_ptr,num);
    display(*vec_ptr);
    return 0;
}
