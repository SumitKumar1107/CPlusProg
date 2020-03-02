#include<bits/stdc++.h>
using namespace std;

class bank{
public:
  int accno;
  float accbal;
  void print()
  {
    cout<<accno<<endl;
    cout<<accbal<<endl;
  }
};

class saving:public bank{
public:
  float penalty;
  static int transcations;
  void debit(float amt)
  {
    accbal-=amt;
    transcations++;
    if(transcations>5)
    {
      penalty+=20;
      accbal-=20;
      cout<<"penalty amount"<<penalty<<endl;
    }
  }

  void credit(float amt)
  {
    accbal+=amt;
    transcations++;
    if(transcations>5)
    {
      penalty+=20;
      accbal-=20;
      cout<<"penalty amount"<<penalty<<endl;
    }
  }

  void printpenalty()
  {
    if(penalty>0)
    {
      if(transcations>5)
      {
        penalty=20;
        cout<<penalty<<endl;
      }
    }
  }
};

int saving::transcations = 0;

int main()
{
  saving s1;
  s1.accno = 1001;
  s1.accbal=1000;
  s1.penalty=0;
  s1.print();
  s1.debit(100);
  s1.credit(100);
  s1.debit(100);
  s1.credit(100);
  s1.credit(100);
  s1.credit(100);
  s1.credit(100);
  s1.print();
  cout<<s1.transcations;
  s1.debit(100);
  s1.print();

  return 0;
}
