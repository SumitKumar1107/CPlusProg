#include<iostream>
#include<string>

using namespace std;

class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void set_name(std::string name_val)
        {
            name = name_val;
        }
        //overloaded constructors
        Player()
        {
            cout<<"no args constructor called"<<endl;
        }
        Player(std::string name)
        {
           cout<<"string args constructor called"<<endl; 
        }
        Player(std::string name,int health,int xp)
        {
            cout<<"three args constructor called"<<endl;
        }
        
        ~Player()
        {
            cout<<"destructor called for "<< name <<endl;
        }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("slayer");
    }
    
    {
        Player frank;
        frank.set_name("frank");
        Player hero("hero");
        hero.set_name("hero");
        Player villian("villian",100,12);
        villian.set_name("villian");
    }
    
    Player *enemy = new Player;
    enemy->set_name("enemy");
    
    Player *level_boss = new Player("level boss",1000,300);
    level_boss->set_name("Level boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}
