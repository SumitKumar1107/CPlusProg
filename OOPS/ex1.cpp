#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
  public:
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
  public:
    void talk(string text)
    {
      cout<<name<<" says "<<text<<endl;
    }
    bool is_dead(); 
};

int main(){
  Player frank;
  Player hero;
  
  frank.name = "frank";
  hero.name = "sumit";
  frank.health = 100;
  frank.xp = 12;
  frank.talk("hi there");
  hero.talk("hi there");
  
  
  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  enemy->xp = 15;
  enemy->talk("i will destroy you");
    return 0;
}