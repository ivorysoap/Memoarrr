
/* 
 * File:   Rules.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 15:11
 */

#ifndef RULES_H
#define RULES_H
#include "Game.h"
#include "Player.h"


class Rules{
protected: typename std::vector<Player>::iterator it;
protected: Player *ptr;

public:
    //the following bool methods are supposed to have a const argument Game. Removed them because throw errors
    bool isValid(Game&);
    bool gameOver(Game&);
    bool roundOver(Game&);
    Player& getNextPlayer(Game&);
    Player* getCurrentPlayer(){return ptr;}
    
};

#endif /* RULES_H */

