
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

class Reward{
    
public:  enum Rubies {ONE = 1, TWO, THREE, FOUR} const enumField;
private: Reward(Rubies r): enumField(r){}; //private constructor
    
public:
    int getRubies(){return enumField;}
    operator int()const {return this->enumField;} //cast operator to int
   
};

#endif /* REWARD_H */

