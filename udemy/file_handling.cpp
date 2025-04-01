// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include<fstream>
using namespace std;

int process_response(const string &ans,const string &key)
{
    int score{0};
    for(int i=0;i<key.size();i++)
    {
        if(ans.at(i)==key.at(i))
        {
            score++;
        }
    }
    return score;
}

int main() {



    ifstream in_file{};
    in_file.open("responses.txt");

    if(!in_file)
    {
        cerr<<"Some problem opening file";
        return 1;
    }
    string name{},ans{},key{};
    in_file>>key;
   while(in_file>>name>>ans)
   {
       cout<<name<<" "<<ans<<" ";
       int score=process_response(ans,key);
       cout<<score<<endl;
   }
    in_file.close();
    return 0;
}

