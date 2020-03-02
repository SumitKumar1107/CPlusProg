#include<iostream>
#include<string>

using namespace std;

class Player
{
    public:
        static int remaining;
        static int created;
        static int destroyed;
        std::string name;
        int x;
    public:
        std::string get_name()
        {
            return name;
        }
        int get_x()
        {
            return x;
        }
        Player(std::string name_val="NONE",int x_val = 0):name(name_val),x(x_val)
        {
          created++;
        }
        ~Player()
        {
          destroyed++;
        }

        static int get_num_players()
        {
          return created-destroyed;
        }
};

int Player::remaining = 0;
int Player::created = 0;
int Player::destroyed = 0;


void created_players()
{
    cout<<"Created "<<Player::created<<endl;
}
void destroy_players()
{
    cout<<"Destroyed "<<Player::destroyed<<endl;
}
void remaining_players()
{
    cout<<"Remaining "<<Player::get_num_players()<<endl;
}


int main()
{
    Player hero{"Bruce"};
    {
      Player hero{"Sumit"};
    }
    Player hero1{"Wayne"};
    created_players();
    destroy_players();
    remaining_players();
    return 0;
}
