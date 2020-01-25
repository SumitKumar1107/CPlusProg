#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
        string name;
        double balance;
    public:
        void set_balance(double bal)
        {
            balance=bal;
        }
        double get_balance()
        {
            return balance;
        }
        void set_name(string n);
        string get_name();
        
        bool deposit(double amount);
        bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name=n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Account frank;
    frank.set_name("Frank");
    frank.set_balance(1000.0);
    
    if(frank.deposit(200))
    {
        cout<<"deposit ok"<<endl;
    }
    else
    {
        cout<<"deposit not allowed"<<endl;
    }
    
    if(frank.withdraw(500))
    {
        cout<<"withdraw ok"<<endl;
    }
    else
    {
        cout<<"not sufficient funds"<<endl;
    }
    
    if(frank.withdraw(1500))
    {
        cout<<"withdraw ok"<<endl;
    }
    else
    {
        cout<<"not sufficient funds"<<endl;
    }
}