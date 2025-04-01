// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

bool is_palindrome(const std::string& s)
{
    deque <char> d;

    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    for(const auto ss:s)
    {
        if(isalpha(ss))
        d.push_back(toupper(ss));
    }
    char c1{};
    char c2;
    while(d.size()>1)
    {
        c1=d.front();
        c2=d.back();
        d.pop_back();
        d.pop_front();
        if(c1!=c2)
            return false;
    }
    /*for(const auto dq:d)
    {
        cout<<dq;
    }*/
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
