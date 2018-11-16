#include <iostream>
#include <vector>
#include "Game.h"
#include "Player.h"

using namespace std;

int Game::getRound(){

    return round;

}

void Game::addPlayer(const Player &player){

    players.push_back(player);

}

Player& Game::getPlayer(){

    //Not sure what this method is supposed to do.  I'm assuming it's supposed to return all players.

}

