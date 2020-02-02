#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
  std::string name;
  int health;
  int xp;
public:
  std::string get_name(){
    return name;
  }
  int get_health(){
    return health;
  }
  int get_xp(){
    return xp;
  }
  Player(std::string name_val="None",int health_val = 0,int xp_val=0);
  //copy constructor
  Player(const Player &source);
  //destructor
  ~Player()
  {
    cout<<"destructor called for "<<name <<endl;
  }
};

//constructor
Player::Player(std::string name_val,int health_val,int xp_val)
  :name{name_val},health{health_val},xp{xp_val}{
    cout<<"three args constructor for " + name<<endl;
  }
//copy constructor
Player::Player(const Player &source)
  :name(source.name),health(source.health),xp(source.xp)
  {
    cout<<"copy constructor-made copy of:"<<source.name<<endl;
  }

  void display_player(Player p)
  {
    cout<<"name :"<<p.get_name()<<endl;
    cout<<"health :"<<p.get_health()<<endl;
    cout<<"xp :"<<p.get_xp()<<endl;
  }

int main()
{
  Player empty {"sumit",100,50};

  display_player(empty);
  Player my_new_object{empty};

  Player frank{"Frank"};
  Player hero{"Hero",100};
  Player Villian{"Villian",100,55};

  return 0;
}
