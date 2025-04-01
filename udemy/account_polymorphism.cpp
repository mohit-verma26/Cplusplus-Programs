#include<iostream>
#include<vector>
using namespace std;

class Illegal_balance_exception: public exception
{
    public:
    Illegal_balance_exception() noexcept=default;
    ~Illegal_balance_exception()=default;
    virtual const char* what() const noexcept
    {
        return "Illegal Balance Exception";
    }
};

class Insufficent_funds_exception: public exception
{
    public:
    Insufficent_funds_exception() noexcept=default;
    ~Insufficent_funds_exception()=default;
    virtual const char* what() const noexcept
    {
        return "Insufficent Funds exception";
    }
};

class I_Printable
{
    friend ostream &operator<<(ostream &,const I_Printable &);
public:
    virtual void print(ostream &os) const=0;
    virtual ~I_Printable()=default;
};

ostream &operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}

class Account: public I_Printable
{
protected:
    string name;
    double balance;
public:

    Account(string name="Unnamed account",double bal=0.0)
    :name{name},balance{bal}
    {
        if(balance<0.0)
        throw Illegal_balance_exception{};
    }

    virtual bool deposit(double amount)=0;

    virtual bool withdraw(double amount)=0;

    double get_balance() const
    {
        return balance;
    }
    string get_name() const
    {
        return name;
    }
    virtual void print(ostream &os) const
    {
        os<<"[ Account: "<<name<<" :- "<<balance<<" ]";

    }
    virtual ~Account()=default;
};

bool Account:: deposit(double amount)
        {
        if(amount<0)
            return false;
        else
            balance+=amount;
            return true;
        }
bool Account:: withdraw(double amount)
        {
        if(balance-amount>=0)
        {
            balance-=amount;
            return true;
        }
        else
        throw Insufficent_funds_exception{};
        }

class Saving_account: public Account
{
protected:
    double int_rate;
public:

    Saving_account(string name="unnamed account",double balance=0, double rate=0)
    :Account{name,balance},int_rate{rate}{}
    virtual bool deposit(double amount) override
    {
       amount+=amount*(int_rate/100);
       return Account::deposit(amount);
    }
    virtual bool withdraw(double amount) override
    {
        return Account::withdraw(amount);
    }
     virtual void print(ostream &os) const override
    {
    os<<"[ Saving account: "<<name<<" :- "<<balance<<" , "<<int_rate<<"% ]";
    }
    virtual ~Saving_account()=default;
};

class Checking_account: public Account
{
public:

    Checking_account(string name="Unnamed account",double bal=0.0)
    :Account{name,bal}{}

    virtual bool withdraw(double amount) override
    {
        amount+=1.50;
        return Account::withdraw(amount);
    }
    virtual bool deposit(double amount) override
    {
        return Account::deposit(amount);
    }
     virtual void print(ostream &os) const override
    {
    os<<"[ Checking account: "<<name<<" :- "<<balance<<" ]";
    }
    virtual ~Checking_account()=default;
};

class Trust_account: public Saving_account
{
private:
    static constexpr double bonus_amount=50.0;
    static constexpr double bonus_threshold=5000.0;
    static constexpr int max_withdrawal=3;
    static constexpr double max_withdraw_percent=0.2;
protected:
    int num_withdrawals{};
public:

    Trust_account(string name="Unnamed account", double balance=0.0, double rate=0.0)
    :Saving_account{name,balance,rate},num_withdrawals{0}{}
// deposit additional $50 bonus when amount>=$5000
    virtual bool deposit(double amount) override
    {
        if(amount>=bonus_threshold)
            amount+=bonus_amount;
        return Saving_account::deposit(amount);
    }
    virtual bool withdraw(double amount) override
        {
            if(num_withdrawals>=max_withdrawal||(amount>balance*max_withdraw_percent))
                return false;
            else{
                ++num_withdrawals;
                return Saving_account::withdraw(amount);
            }
        }
         virtual void print(ostream &os) const override
    {
    os<<"[ Trusted account: "<<name<<" :- "<<balance<<" , "<<int_rate<<"%"<<" Withdrawal :- "<<num_withdrawals<<" ]";
    }
        virtual ~Trust_account()=default;
};


//utility functions//

void display(const vector<Account *> &accounts)
{
    cout<<"\n===Accounts==================================="<<endl;
    for(const auto acc: accounts)
        cout<<*acc<<endl;
}
void deposit(vector<Account *> &accounts, double amount)
{
    cout<<"\n===Depositing to Accounts====================="<<endl;
    for(auto acc:accounts)
    {
        if(acc->deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<*acc<<endl;
        else
            cout<<"Failed to Deposit of "<<amount<<" to "<<*acc<<endl;
    }
}
void withdraw(vector<Account *> &accounts, double amount)
{
    cout<<"\n===Withdrawing from Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc->withdraw(amount))
            cout<<"withdrawing "<<amount<<" from "<<*acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<*acc<<endl;
    }
}

int main()
{
Checking_account mohit("MOHIT",5000);
cout<<mohit<<endl;

try{Account *raghu=new Trust_account("RAGHU");
cout<<*raghu<<endl;
 Account *p1=new Checking_account("PRAKHAR", 10000);
 Account *p2=new Saving_account("HIMANSHU", 1000);
 Account *p3=new Trust_account("ADI");

vector <Account *> accounts {p1,p2,p3};

display(accounts);
deposit(accounts,1000);
withdraw(accounts,2000);
display(accounts);}
catch(const Illegal_balance_exception &ex)
{
    cerr<<ex.what()<<endl;
}

catch(const Insufficent_funds_exception &ex)
{
    cerr<<ex.what()<<endl;
}


try
{
Account *prakhar=new Saving_account("PRAKHAR",1000);
prakhar->withdraw(2000);
cout<<*prakhar;
}
catch(const Illegal_balance_exception &ex)
{
    cerr<<ex.what()<<endl;
}

catch(const Insufficent_funds_exception &ex)
{
    cerr<<ex.what()<<endl;
}

cout<<endl;
cout<<"Program completed succesfully";
    return 0;
}
