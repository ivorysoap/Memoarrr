#include <iostream>
#include <vector>
#include "Game.h"
#include "Player.h"


using namespace std;

/**
 * Returns a number between 0 and 6 corresponding to the current round of the game
 *
 * @return round an int between 0 and 6 corresponding to the current round
 */
int Game::getRound(){

    return round;

}

/**
 * Adds a Player to the current Game.
 *
 * @param player the player to be added to the Game
 */
void Game::addPlayer(const Player &player){

    players.push_back(player);

}

/**
 * Returns the Player corresponding to the specified Side.
 *
 * @param side the Side for which we would like to determine the Player
 * @return p the Player sitting on the specified Side
 */
Player& Game::getPlayer(const Player::Side &side){

    for(Player p : players)
        if(p.enumField == side)
            return p;

}

const Card* Game::getPreviousCard(){

    //Unimplemented

}

void Game::setCurrentCard(const Card *card){

    previousCard = currentCard;

    currentCard = *card;

}

Card* Game::getCard(const Board::Letter &letter, const Board::Number &number){

    return board.getCard(letter, number);

}

void Game::setCard(const Board::Letter &letter, const Board::Number &number, Card *card){

    board.setCard(letter, number, card);
    
}



