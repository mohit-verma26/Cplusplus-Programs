#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
    char *str;
public:
    Mystring():str{nullptr}
    {
        str=new char[1];
        *str='\0';
    }
    Mystring(const char *s):str{nullptr}
    {
        if(s==nullptr)
        {
            str=new char[1];
            *str='\0';
        }
        else
        {
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }
    Mystring(const Mystring &source):str{nullptr}
    {
        str=new char[strlen(source.str)+1];
        strcpy(str,source.str);
    }
    Mystring(Mystring &&source):str{source.str}
    {
        source.str=nullptr;
    }
    ~Mystring()
    {
        delete[] str;
    }
    Mystring &operator =(const Mystring &rhs)
    {
        if(this==&rhs)
        {
            return *this;
        }
        delete []str;
        str=new char[strlen(rhs.str)+1];
        strcpy(str,rhs.str);
        return *this;
    }
    Mystring &operator=(Mystring &&rhs)
    {
        if(this==&rhs)
            return *this;
        delete []str;
        str=rhs.str;
        rhs.str=nullptr;
        return *this;
    }
    Mystring operator-() const
    {
        char *buff=new char[strlen(str)+1];
        strcpy(buff,str);
        for(int i=0;i<strlen(buff);i++)
        {
            buff[i]=tolower(buff[i]);
        }
        Mystring temp{buff};
        delete [] buff;
        return temp;
    }
    bool operator ==(const Mystring &rhs) const
    {
        return (strcmp(str,rhs.str)==0);
    }
    bool operator !=(const Mystring &rhs) const
    {
        return !(strcmp(str,rhs.str)==0);
    }
    bool operator <(const Mystring &rhs) const
    {
        return(strcmp(str,rhs.str)<0);
    }
    bool operator >(const Mystring &rhs) const
    {
        return(strcmp(str,rhs.str)>0);
    }
    Mystring operator +(const Mystring &rhs) const
    {
        char *buff=new char[strlen(str)+strlen(rhs.str)+1];
        strcpy(buff,str);
        strcat(buff,rhs.str);
        Mystring temp{buff};
        delete [] buff;
        return temp;
    }
    Mystring &operator +=(const Mystring &rhs)
    {
        *this=*this+rhs;
        return *this;
    }
    Mystring operator *(const int &rhs) const
    {
        Mystring temp;
        for(int i=0;i<rhs;i++)
        {
            temp+=*this;
        }
        return temp;
    }
    Mystring operator++()
    {
        for(int i=0;i<strlen(str);i++)
        {
            str[i]=toupper(str[i]);
        }
        return *this;

    }
    Mystring operator++(int)
    {
        Mystring temp{*this};
        operator++();
        return temp;

    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    cout<<boolalpha<<endl;
    Mystring mohit{"MohitVerma"};
    Mystring small_mohit,raghu{"raghu"};
    small_mohit=-mohit;
    mohit.display();
    small_mohit.display();
    mohit!=raghu;
    Mystring kota=mohit+raghu;
    kota.display();
    mohit=mohit*3;
    mohit.display();
    cout<<(mohit==mohit)<<endl;
    cout<<(mohit!=raghu)<<endl;
    mohit++;
    mohit.display();
    mohit=-mohit;
    mohit.display();
}
