// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
using namespace std;

bool find_string(const string &wtr,const string &wr)
{
    size_t found=wr.find(wtr);
    if(found==string::npos)
        return false;
    else
        return true;
}

int main() {

    ifstream in_file;
    int word_count{},match_count{};
    string word_to_find{},word_read{};
    in_file.open("romeoandjuliet.txt");
    if(!in_file.is_open())
    {
        cerr<<"error opening file";
        return 1;
    }
    cout<<"Enter the word you would like to search in the book:- ";
    cin>>word_to_find;
    while(in_file>>word_read)
    {
        word_count++;
        if(find_string(word_to_find,word_read))
        {
            match_count++;
            cout<<word_read;

        }
    }
    cout<<endl;
    cout<<word_count<<" worded are searched"<<endl;
    cout<<match_count<<" word are found";
    cout << endl;

    return 0;
}

