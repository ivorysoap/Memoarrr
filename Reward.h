
/* 
 * File:   Reward.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 01:07
 */
#include <iostream>

using namespace std;

#ifndef REWARD_H
#define REWARD_H

enum class Rubies {ONE = 1, TWO, THREE, FOUR};

class Reward{
    
    friend class RewardDeck;
    const Rubies enumField;

private: Reward(Rubies r): enumField(r){}; //private constructor
    
public:
    int getRubies(){return (int)enumField;}
    operator int() {return this->getRubies();} //cast operator to int
   
};

#endif /* REWARD_H */

