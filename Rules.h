
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
    bool isValid( Game&);
    bool gameOver(Game&);
    bool roundOver( Game&);
};

#endif /* RULES_H */

