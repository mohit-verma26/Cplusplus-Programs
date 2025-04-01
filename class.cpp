#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    public:
    int ag,std;
    string fn,ln;
    void set_age(int age)
    {
        ag=age;
    }
    int get_age()
    {
        return ag;
    }
    void set_first_name(string first_name)
    {
        fn=first_name;
    }
    string get_first_name()
    {
        return fn;
    }
    void set_last_name(string last_name)
    {
        ln=last_name;
    }
    string get_last_name()
    {
        return ln;
    }
    void set_standard(int standard)
    {
        std=standard;
    }
    int get_standard()
    {
        return std;
    }
    string to_string()
    {
        cout<<ag<<","<<fn<<","<<ln<<","<<std;
        return " ";
    }

};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

