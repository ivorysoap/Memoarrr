#include <iostream>
#include "Player.h"

using namespace std;

int Player::player_count = 0;

Player::Player(const string& _name): name(_name){
    
    player_count++;
    switch(player_count){
        case 1: Player::TOP;
        case 2: Player::BOTTOM;
        case 3: Player::LEFT;
        case 4: Player::RIGHT;
    }
}

Player::addReward(const Reward& _reward){
    rubies = rubies + _reward.enumField;
}

