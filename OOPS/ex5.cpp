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
        Player(std::string name_val="NONE",int x = 0);
        ~Player();

        static int get_num_players();
};

int Player::remaining = 0;
int Player::created = 0;
int Player::destroyed = 0;

Player::Player(std::string name_val,int x_val):name{name_val},x{x_val}
{
    ++created;
}

Player::~Player()
{
    ++destroyed;
}

int Player::get_num_players()
{
    remaining = created-destroyed;
    return remaining;
}

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
