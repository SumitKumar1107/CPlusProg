#include<iostream>

using namespace std;

class bankaccount
{
  public:
  int acno;
  int accbal;

  bankaccount(int num,int bal):acno(num),accbal(bal)
  {
  }

  void printaccount()
  {
    cout<<"account number "<<acno<<endl;
    cout<<"account balance "<<accbal<<endl;
  }
};

class customer
{
   public:
   int id;
   string name;
   bankaccount ba1;

  customer(int id1,string name1,bankaccount ba):id(id1),name(name1),ba1(ba)
  {

  }

  void credit(int amt)
  {
    ba1.accbal += amt;
  }

  void debit(int amt)
  {
    ba1.accbal -= amt;
  }

  void transfer(bankaccount &ba,int amt)
  {
    ba1.accbal -= amt;
    ba.accbal += amt;
  }

  void printcustomer()
  {
    cout<<"id "<<id<<endl;
    cout<<"name "<<name<<endl;
    ba1.printaccount();
  }
};

int main()
{
  bankaccount acc1(11,123),acc2(12,124);
  customer c1(1,"sumit",acc1);
  customer c2(2,"summu",acc2);

  c1.printcustomer();
  c2.printcustomer();

  c1.transfer(c2.ba1,200);

  c1.printcustomer();
  c2.printcustomer();
}