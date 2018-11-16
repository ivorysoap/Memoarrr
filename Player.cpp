#include <iostream>
#include "Player.h"
#include "Reward.h"

using namespace std;

int Player::player_count = 0;

Player::Player(const string& _name): name(_name){
    
    player_count++;
    switch(player_count){
        case 1: Player::enumField(1);
        case 2: Player::enumField(2);
        case 3: Player::enumField(3);
        case 4: Player::enumField(4);
    }
}

Player::addReward(const Reward& _reward){
    rubies = rubies + _reward.enumField;
}

ostream& operator<<(ostream& os, const Player& pl){ //to be implemented
    
    return os;
}

