//#define TEST_GAME

#include <iostream>
#include <vector>
#include "Game.h"
#include "Player.h"

#ifdef TEST_GAME
int main(){
    
    CardDeck::cardD->make_CardDeck();

    Board *bd = new Board();
    Game myGame(bd);
    Player one("Victor Hugo");
    Player two("Guy de Maupassant");
    myGame.addPlayer(one);
    myGame.addPlayer(two);
    cout<< myGame;
}
#endif
/**
 * Returns a number between 0 and 6 corresponding to the current round of the game.
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
    
    int ctr(0);
    for(Player p : players){
        if(p.enumField = side) break;
        ctr++;
    }
    return players.at(ctr);
}

/**
 * Returns pointer to the Card which was last selected.
 *
 * @return pointer to the card which was last selected
 */
const Card* Game::getPreviousCard(){

    return previousCard;

}

/**
 * Returns pointer to the currently-selected Card.
 *
 * @return pointer to the currently-selected Card
 */
const Card* Game::getCurrentCard(){

    return currentCard;

}

/**
 * Set the currently-selected Card.  Called when a player picks a Card.
 *
 * @param card pointer to the Card to be set as the currently-selected Card
 */
void Game::setCurrentCard(Card *card){

    previousCard = currentCard;

    currentCard = card;

}

/**
 * [WRAPPER OF Board::getCard()]
 * Returns a pointer to the card at the indicated location.
 *
 * @param letter the letter (row) of the card in question
 * @param number  the number (column) of the card in question
 * @return a pointer to the card at the indicated location, if a card exists there
 */
Card* Game::getCard(const Board::Letter &letter, const Board::Number &number){

    return myBoard->getCard(letter, number);

}

/**
 * [WRAPPER OF Board::setCard()]
 * Places the indicated card at the indicated location.
 *
 * @param letter the letter (row) at which the card should be placed
 * @param number the number (column) at which the card should be placed
 * @param card pointer to the card which is to be placed
 * @throws out_of_range exception if the indicated location is outside the board's bounds, or if the indicated location is the "void" in the board's centre
 */
void Game::setCard(const Board::Letter &letter, const Board::Number &number, Card *card){

    myBoard->setCard(letter, number, card);

}





