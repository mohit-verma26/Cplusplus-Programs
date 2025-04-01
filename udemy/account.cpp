#include<iostream>
#include<vector>
using namespace std;


class Account
{
protected:
    string name;
    double balance;
public:
    Account(string name="Unnamed account",double bal=0.0)
    :name{name},balance{bal}{}
    friend ostream &operator<<(ostream &, const Account &);
    bool deposit(double amount)
    {
        if(amount<0)
            return false;
        else
            balance+=amount;
            return true;
    }
    bool withdraw(double amount)
    {
        if(balance<=amount)
            return false;
        else
            balance-=amount;
            return true;
    }
    double get_balance() const
    {
        return balance;
    }
    string get_name() const
    {
        return name;
    }
};
ostream &operator<<(ostream &os, const Account &acc)
{
    os<<"[ Account: "<<acc.name<<" :- "<<acc.balance<<" ]";
    return os;
}
class Saving_account: public Account
{
protected:
    double int_rate;
public:
    Saving_account(string name="unnamed account",double balance=0, double rate=0)
    :Account{name,balance},int_rate{rate}{}
    friend ostream &operator<<(ostream &, const Saving_account &);
    bool deposit(double amount)
    {
       amount+=amount*(int_rate/100);
       return Account::deposit(amount);
    }
};
ostream &operator<<(ostream &os, const Saving_account &acc)
{
    os<<"[ Saving account: "<<acc.name<<" :- "<<acc.balance<<" , "<<acc.int_rate<<"% ]";
    return os;
}

class Checking_account: public Account
{
public:
    Checking_account(string name="Unnamed account",double bal=0.0)
    :Account{name,bal}{cout<<endl<<"checking class Constructor called";}
        friend ostream &operator<<(ostream &, const Checking_account &);

    bool withdraw(double amount)
    {
        amount+=1.50;
        return Account::withdraw(amount);
    }
};
ostream &operator<<(ostream &os, const Checking_account &acc)
{
    os<<"[ Checking account: "<<acc.name<<" :- "<<acc.balance<<" ]";
    return os;
}

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
        friend ostream &operator<<(ostream &, const Trust_account &);
// deposit additional $50 bonus when amount>=$5000
    bool deposit(double amount)
    {
        if(amount>=bonus_threshold)
            amount+=bonus_amount;
        return Saving_account::deposit(amount);
    }
    bool withdraw(double amount)
        {
            if(num_withdrawals>=max_withdrawal||(amount>balance*max_withdraw_percent))
                return false;
            else{
                ++num_withdrawals;
                return Saving_account::withdraw(amount);
            }
        }
};

ostream &operator<<(ostream &os, const Trust_account &acc)
{
    os<<"[ Trusted account: "<<acc.name<<" :- "<<acc.balance<<" , "<<acc.int_rate<<"%"<<" Withdrawal :- "<<acc.num_withdrawals<<" ]";
    return os;
}
//utility functions//

void display(const vector<Account> &accounts)
{
    cout<<"\n===Accounts==================================="<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}
void deposit(vector<Account> &accounts, double amount)
{
    cout<<"\n===Depositing to Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to Deposit of "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Account> &accounts, double amount)
{
    cout<<"\n===Withdrawing from Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            cout<<"withdrawing "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}
void display(const vector<Saving_account> &accounts)
{
    cout<<"\n===Accounts==================================="<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}
void deposit(vector<Saving_account> &accounts, double amount)
{
    cout<<"\n===Depositing to Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to Deposit of "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Saving_account> &accounts, double amount)
{
    cout<<"\n===Withdrawing from Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            cout<<"withdrawing "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}

void display(const vector<Checking_account> &accounts)
{
    cout<<"\n===Accounts==================================="<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}
void deposit(vector<Checking_account> &accounts, double amount)
{
    cout<<"\n===Depositing to Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to Deposit of "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Checking_account> &accounts, double amount)
{
    cout<<"\n===Withdrawing from Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            cout<<"withdrawing "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}

void display(const vector<Trust_account> &accounts)
{
    cout<<"\n===Accounts==================================="<<endl;
    for(const auto &acc: accounts)
        cout<<acc<<endl;
}
void deposit(vector<Trust_account> &accounts, double amount)
{
    cout<<"\n===Depositing to Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            cout<<"Deposited "<<amount<<" to "<<acc<<endl;
        else
            cout<<"Failed to Deposit of "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(vector<Trust_account> &accounts, double amount)
{
    cout<<"\n===Withdrawing from Accounts====================="<<endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            cout<<"withdrawing "<<amount<<" from "<<acc<<endl;
        else
            cout<<"Failed to withdraw "<<amount<<" from "<<acc<<endl;
    }
}

int main()
{
    cout.precision(2);
    cout<<fixed;
 /*   Account mohit;
    mohit.deposit(1000);
    mohit.withdraw(2000);
    cout<<mohit;
    Account raghu("Raghu");
    cout<<raghu;
    raghu.deposit(5000);
    cout<<raghu;
    */
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"MOHIT"});
    accounts.push_back(Account{"RAGHU",1000});
    accounts.push_back(Account{"HRISHABH",2000});
    display(accounts);
    deposit(accounts,10000);
    withdraw(accounts,2000);
    withdraw(accounts,200000);
    display(accounts);

    vector<Saving_account> sav_accounts;
    sav_accounts.push_back(Saving_account{});
    sav_accounts.push_back(Saving_account{"superman"});
    sav_accounts.push_back(Saving_account{"batman",1000});
    sav_accounts.push_back(Saving_account{"wonder_woman",2000,5});
    display(sav_accounts);
    deposit(sav_accounts,10000);
    withdraw(sav_accounts,2000);
    withdraw(sav_accounts,200000);
    display(sav_accounts);

    vector<Checking_account> checking_accounts;
    checking_accounts.push_back(Checking_account{});
    checking_accounts.push_back(Checking_account{"MOHIT"});
    checking_accounts.push_back(Checking_account{"RAGHU",1000});
    checking_accounts.push_back(Checking_account{"HRISHABH",2000});
    display(checking_accounts);
    deposit(checking_accounts,10000);
    withdraw(checking_accounts,2000);
    withdraw(checking_accounts,200000);
    display(checking_accounts);
   /* Checking_account mohit;
    mohit.deposit(1000);
    cout<<mohit;
    mohit.withdraw(500);
    cout<<mohit;*/

    vector<Trust_account> trust_accounts;
    trust_accounts.push_back(Trust_account{});
    trust_accounts.push_back(Trust_account{"superman",10000,5});
    trust_accounts.push_back(Trust_account{"batman",20000,4});
    trust_accounts.push_back(Trust_account{"wonder_woman",30000});
    display(trust_accounts);
    deposit(trust_accounts,1000);
    withdraw(trust_accounts,3000);
    display(trust_accounts);

    for(int i=0;i<5;i++)
        withdraw(trust_accounts,1000);


    return 0;
}
