#include<bits/stdc++.h>
using namespace std;

class car{
public:
  string color;
  string name;
  int noofseats;
  int maxspeed;
  double speed =0;

  car(string clr,string n,int s,int mx):color(clr),name(n),noofseats(s),maxspeed(mx)
  {

  }
  void accelerate()
  {

  }
  void pbreak()
  {

  }
};

class bmw:public car{
public:
  bmw(string clr,string n,int s,int mx):car(clr,n,s,mx)
  {

  }

  void accelerate()
  {
     speed+=2;
     if(speed>=maxspeed)
     {
       speed = maxspeed;
     }
  }

  void pbreak()
  {
    speed-=45;
    if(speed<0)
    {
      speed=0;
    }
  }
};

class ferrari:public car{
public:
  ferrari(string c,string n,int s,int m):car(c,n,s,m)
  {

  }

  void accelerate()
  {
     speed+=3;
     if(speed>=maxspeed)
     {
       speed = maxspeed;
     }
  }

  void pbreak()
  {
    speed-=50;
    if(speed<0)
    {
      speed=0;
    }
  }
};

int main()
{
  ferrari f("red","rocket",2,350);
  bmw b("white","king",2,300);
  int i;
  for(i=0;i<150;i++)
  {
    f.accelerate();
    b.accelerate();
  }
  cout<<"Ferrari"<<f.speed<<endl;
  cout<<"Bmw"<<b.speed<<endl;
}
