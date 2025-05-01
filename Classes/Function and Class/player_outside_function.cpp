#include<iostream>
using namespace std;

class Player
{
private:
    char name[20];
    char country[20];
    char club[20];
    int jersey_num;
    int goals_count;

public:
    void getDetails();
    void display();
};
void Player::getDetails()
{
    cout<<"Enter Player Name, Country, Club: ";
    cin>>name>>country>>club;
    cout<<"Enter Jersey Number, Number of Goals: ";
    cin>>jersey_num>>goals_count;
}
void Player::display()
{
    cout<<"Player Name: "<<name<<endl;
    cout<<"Country: "<<country<<endl;
    cout<<"Club: "<<club<<endl;
    cout<<"Jersey Number: "<<jersey_num<<endl;
    cout<<"Number of Goals: "<<goals_count<<endl;
}
int main()
{
    Player p;
    p.getDetails();
    p.display();
    return 0;
}
