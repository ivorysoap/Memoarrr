
/* 
 * File:   Card.h
 * Author: Boris Nz
 * Created on 10 novembre 2018, 00:45
 */
#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H
#define ROWS 3

class Card{
   
    const static char cardUncovered[][3];
    char cardDisp[ROWS][3]; //3x3 array to display the card
    char dispFace; char dispBack; // First letter of the Face and Background. Will be usefull to print the card
    
    enum FaceAnimal {CRAB, PENGUIN, OCTOPUS, TURTLE, WALRUS} const enumFace;
    enum FaceBackground {RED, GREEN, PURPLE, BLUE, YELLOW} const enumBack;
    
   Card(FaceAnimal a, FaceBackground b);
public:
    int getNRows()const{ return ROWS;}
    char getCardUncovered(){return cardUncovered;}
    void print()const;
    string operator()(int) const;
    //friend ostream& operator<<(ostream&, const Card&);
    
};

#endif /* CARD_H */

