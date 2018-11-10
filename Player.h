
/* 
 * File:   Player.h
 * Author: Boris Nz
 *
 * Created on 9 novembre 2018, 15:39
 */
#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    
    string name;
    enum Side {TOP = 1, BOTTOM, LEFT, RIGHT};
    int rubies = 0;
    bool active;
      
public:
    static int player_count; //keeps the number of players and thus assign the player side when player object is created
   
    Player(const string& _name): name(_name){}
    
    string getName() const {return name;}
    void setActive(bool) {active = 1;}
    bool isActive() const {return active;}
    int getNRubies() const {return rubies;}
    void addReward(const Reward&);
    void setDisplayMode(bool endOfGame);
};

#endif /* PLAYER_H */

