//#define TEST_PLAYER
#include <iostream>
#include "Player.h"
#include "Reward.h"

using namespace std;
#ifdef TEST_PLAYER

int main(){
    Player player("Please");
    cout << player;
}
#endif
int Player::player_count = 0;

Player::Player(const string _name): name(_name), active(1){
    
    player_count++;
    switch(player_count){
        case 1: Player::enumField=TOP; enumText = "Top"; break;
        case 2: Player::enumField=BOTTOM; enumText = "BOTTOM" ;break;
        case 3: Player::enumField=LEFT; enumText = "LEFT" ;break;
        case 4: Player::enumField=RIGHT; enumText = "RIGHT" ;break;
    }
}

/**
 * Adds the number of rubies contained by the Reward in question to the Player's total ruby count.
 *
 * @param _reward the Reward whose rubies will be attributed to the Player.
 */
void Player::addReward(const Reward & _reward){
    rubies = rubies + _reward.getRubies();
}



