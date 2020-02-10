#include<bits/stdc++.h>

using namespace std;

class player
{
public:
  string name;
  int innings;
  int notout;
  int runs;
  int avg;

  player()
  {

  }

  player(string n,int i,int o,int ru,int a)
  {
    name=n;
    innings = i;
    notout = o;
    runs = ru;
    avg = a;
  }

  string getname()
  {
    return name;
  }

  int getavg()
  {
    return avg;
  }

  void update(player p[])
  {
      int i;
      for(i=0;i<5;i++)
      {
        p[i].avg = p[i].runs/p[i].innings;
      }
  }

  void displayplayer(player p[])
  {
    int i;
    for(i=0;i<5;i++)
    {
      cout<<p[i].name<<endl;
      cout<<p[i].avg<<endl;
    }
  }

  player getplayer(player p[])
  {
    player temp;

    int i;
    for(i=0;i<5;i++)
    {
      if(p[i].avg>p[i+1].avg)
      {
        temp=p[i];
        p[i]=p[i+1];
        p[i+1]=p[i];
      }
      else
      {
        temp=p[i];
      }
    }
    return temp;
  }

  void displayplayer(player p)
  {
    cout<<p.name<<endl;
    cout<<p.avg<<endl;
  }
};

int main()
{

  player cp1;
  player p1("a",5,1,200,0);
  player p2("b",6,2,300,0);
  player p3("c",7,3,400,0);
  player p4("d",8,4,500,0);
  player p5("e",9,5,600,0);

  player cp[] = {p1,p2,p3,p4,p5};
  cp1.update(cp);
  cp1.displayplayer(cp);

  player cp3 = cp1.getplayer(cp);
  cp1.displayplayer(cp3);
}
