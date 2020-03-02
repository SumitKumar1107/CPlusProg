#include<bits/stdc++.h>
using namespace std;

class employee{
public:
  string name;
  float salary;
  string type;
  employee(string n,float s,string t):name(n),salary(s),type(t)
  {

  }
  void display()
  {
    cout<<name<<endl;
    cout<<salary<<endl;
  }

  void hike(float p)
  {
    salary +=(salary*p)/100;
  }
};

class normal:public employee{
public:
  normal(string n,float s):employee(n,s,"normal")
  {

  }

  void hike(float p)
  {
    employee::hike(p);
  }

  void display()
  {
    cout<<type<<endl;
    employee::display();
  }

  static void hike(normal *arr,int sz,float p)
  {
    int i;
    for(i=0;i<sz;i++)
    {
      arr[i].hike(p);
    }
  }

  static void display(normal *arr,int sz)
  {
    int i;
    for(i=0;i<sz;i++)
    {
      arr[i].display();
    }
  }
};

class manager:public employee{
public:
  int stock;
  manager(int st,string n,float s):stock(st),employee(n,s,"manager")
  {

  }

  void hike(float p)
  {
    salary+=((salary*p/100)+(stock*10));
  }

  void display()
  {
    cout<<type<<endl;
    employee::display();
  }

  static void hike(manager *arr,int sz,float p)
  {
    int i;
    for(i=0;i<sz;i++)
    {
      arr[i].hike(p);
    }
  }

  static void display(manager *arr,int sz)
  {
    int i;
    for(i=0;i<sz;i++)
    {
      arr[i].display();
    }
  }
};

int main()
{
  normal arr1[3]={normal("aaa",60000),normal("bbb",62000),normal("ccc",64000)};
  normal::display(arr1,3);
  normal::hike(arr1,3,10);
  normal::display(arr1,3);

  manager arr2[3]={manager(1000,"maaa",150000),manager(1500,"mbbb",200000),manager(2000,"mccc",300000)};
  manager::display(arr2,3);
  manager::hike(arr2,3,10);
  manager::display(arr2,3);

  return 0;
}
