#include <iostream>
#include "Player.h"
#include "Reward.h"

using namespace std;

int Player::player_count = 0;

Player::Player(const string _name): name(_name){
    
    player_count++;
    switch(player_count){
        case 1: Player::enumField=TOP;
        case 2: Player::enumField=BOTTOM;
        case 3: Player::enumField=LEFT;
        case 4: Player::enumField=RIGHT;
    }
}

void Player::addReward(const Reward & _reward){
    rubies = rubies + _reward.getRubies();
}
//ostream& operator<<(ostream& os, Player& pl){
//    
//        os << pl.getName() << " :" << pl.getSide() << endl;
// 
//    return os;
//}

