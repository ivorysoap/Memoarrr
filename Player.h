
/* 
 * File:   Player.h
 * Author: Boris Nz
 *
 * Created on 9 novembre 2018, 15:39
 */
#include <iostream>
#include "Reward.h"

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    
    string name;
    int rubies = 0;
    bool active;
      
public:
    enum Side {TOP = 1, BOTTOM, LEFT, RIGHT} const enumField;
    static int player_count; //keeps the number of players and thus assign the player side when player object is created
   
    Player(const string& _name): name(_name){}
    
    string getName() const {return name;}
    void setActive(bool) {active = 1;}
    bool isActive() const {return active;}
    int getNRubies() const {return rubies;}
    void addReward(const Reward&);
    void setDisplayMode(bool endOfGame); //???
    Side getSide() { return this->enumField;}
    
   // void setSide(Side); For now I don't think we need this method.
    friend ostream& operator<<(ostream&, const Player&);

};

#endif /* PLAYER_H */

