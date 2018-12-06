
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

      
public:
    enum Side {TOP = 1, BOTTOM, LEFT, RIGHT} enumField;
    static int player_count; ///Keeps the number of players and thus assign the player side when player object is created
    Player(const string _name);

    string getName() const {return name;} ///Getter for name.
    void setActive(bool) {active = true;} ///Setter for active status.
    bool isActive() const {return active;} ///Getter for active status.  Returns boolean.
    string getStatus(){if(this->active) return "Active"; else return "Inactive";}  ///Getter for active status.  Returns string.
    int getNRubies() const {return rubies;} ///Getter for number of rubies.
    void addReward(const Reward&); ///Serves to add rubies.

    Side getSide() { return this->enumField;} ///Getter for side of board where the Player resides.
    string getEnumText(){return this->enumText;}

    ///Overload of << operator for printing purposes.
    friend std::ostream& operator<<(ostream &os,  Player &pl){
           os << pl.getName() << " :" << pl.getEnumText()<<" (" << pl.getStatus()<< ")" << endl;
 
    return os;
    }
};


#endif /* PLAYER_H */

