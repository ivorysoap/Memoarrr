
/* 
 * File:   Rules.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 15:11
 */

#ifndef RULES_H
#define RULES_H
#include "Game.h"

class Rules{
    
public:
    //the following bool methods are suposed to have a const argument Game. Removed for now
    bool isValid( Game&);
    bool gameOver(Game&);
    bool roundOver( Game&);
    const Player& getNextPlayer(const Game& );
};

#endif /* RULES_H */

