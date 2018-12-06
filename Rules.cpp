//#define TEST_RULES

#include "Rules.h"
#include "Game.h"
#include <iostream>

using namespace std;

#ifdef TEST_RULES
int main(){
    
    CardDeck::cardD->make_CardDeck();
    Board *bd = new Board();
    Game myGame(bd);
    Player one("Victor Hugo");
    Player two("Guy de Maupassant");
    myGame.addPlayer(one);
    myGame.addPlayer(two);
    Rules myRules;
    cout<< myRules.getNextPlayer(myGame);
}
#endif

/**
 * Test to ensure that the current card and the previous card have either the same animal or the same background.
 * This test ensures that the game's rules have been obeyed by the current player in choosing a new card.
 *
 * @param myGame the current game
 * @return boolean value - true if previous and current card match; false otherwise
 */
bool Rules::isValid( Game& myGame){
    
    if(myGame.getPreviousCard()->getFace() == myGame.getCurrentCard()->getFace()) return true;
    else if(myGame.getPreviousCard()->getBack() == myGame.getCurrentCard()->getBack()) return true;
    else return false;
}

/**
 * Indicates whether the Game is over due to the maximum number of rounds being exceeded.
 *
 * @param myGame the current game
 * @return boolean value - true if the number of rounds has reached 7; false otherwise
 */
bool Rules:: gameOver(Game& myGame){
    if(myGame.getRound() > 6) return true;
}

/**
 * Indicates whether the round is over due to the elimination of all Players but one.
 *
 * @param myGame the current Game
 * @return boolean value - true if there is only one active Player left
 */
bool Rules:: roundOver(Game& myGame){
    int flag(0); 
    for(Player p: myGame.getPlayersVect()){
        if(p.isActive()) flag++; 
    }
    if(flag>1) return false;
    else return true; ///flag returns 0 if no player is active
}

/**
 * Gets the next Player by iterating through the vector of Players.
 *
 * @param myGame the current game
 * @return reference to a Player
 */
Player& Rules::getNextPlayer(Game& myGame){ //logic similar to getNext() in Deck

    if (ptr == nullptr) {
        it = myGame.getPlayersVect().begin();
    }
    if (it != myGame.getPlayersVect().end()) {
        ptr = &(*it);
        it++;
        return *ptr;
    } else { ptr == nullptr;
        return *ptr;
 }
}
