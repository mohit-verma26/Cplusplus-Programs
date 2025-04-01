#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a,sum1;
    double b,sum2;
    string s1,sr;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    cin>>a;
    cin>>b;
    cin.ignore();

    getline(cin,s1);
    // Print the sum of both integer variables on a new line.
    sum1=a+i;
    cout<<sum1<<endl;
    // Print the sum of the double variables on a new line.
    sum2=((double)b+d);
    cout<<fixed<<setprecision(1)<<sum2<<endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    sr = s + s1;
    cout<<sr;
    return 0;
}
