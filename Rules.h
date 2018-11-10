
/* 
 * File:   Rules.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 15:11
 */

#ifndef RULES_H
#define RULES_H

class Rules{
    
public:
    bool isValid(const Game&);
    bool gameOver(const Game&);
    bool roundOver(const Game&);
};

#endif /* RULES_H */

