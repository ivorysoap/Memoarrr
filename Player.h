
/* 
 * File:   Player.h
 * Author: Boris Nz
 * Created on 9 novembre 2018, 15:39
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Reward.h"


using namespace std;

class Player{
    
    string name;
    int rubies = 0;
    bool active;
    string enumText;
    //bool endOfGame;
      
public:
    enum Side {TOP = 1, BOTTOM, LEFT, RIGHT} enumField;
    static int player_count; //keeps the number of players and thus assign the player side when player object is created
    Player(const string _name);
    //bool getEndOfGame(){return endOfGame;}
    string getName() const {return name;}
    void setActive(bool) {active = true;}
    bool isActive() const {return active;}
    string getStatus(){if(this->active) return "Active"; else return "Inactive";}
    int getNRubies() const {return rubies;}
    void addReward(const Reward&);
    //void setDisplayMode(Rules& myRules);
    Side getSide() { return this->enumField;}
    string getEnumText(){return this->enumText;}
    
    friend std::ostream& operator<<(ostream &os,  Player &pl){
           os << pl.getName() << " :" << pl.getEnumText()<<" (" << pl.getStatus()<< ")" << endl;
 
    return os;
    }
};


#endif /* PLAYER_H */

