// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include<string>
#include <fstream>
using namespace std;

int main() {

    ifstream in_file;
    ofstream out_file;
    string line{};
    int count{1};
    in_file.open("romeoandjuliet.txt");
    out_file.open("output.txt");
    if(!in_file)
    {
        cerr<<"Error opening in file ";
        return 1;
    }
    if(!out_file)
        {
        cerr<<"Error opening in file ";
        return 1;
    }
    while(getline(in_file,line))
    {
        out_file<<count;
        out_file<<line;
        count++;
    }
    cout<<"Copied Successfully";
    in_file.close();
    out_file.close();
    return 0;
}

