
/* 
 * File:   Card.h
 * Author: Boris Nz
 * Created on 10 novembre 2018, 00:45
 */

#ifndef CARD_H
#define CARD_H
#include <iostream>

using namespace std;

 enum class FaceAnimal {CRAB, PENGUIN, OCTOPUS, TURTLE, WALRUS};
 enum class FaceBackground {RED, GREEN, PURPLE, BLUE, YELLOW};

class Card{
   
    const FaceAnimal enumFace;
    const FaceBackground enumBack;
    friend class CardDeck;
    const static int ROWS = 3;
    bool isTurnedUp = false;
    const static string cardUncovered[3];
    char cardDisp[ROWS][3]; //3x3 array to display the card
    char dispFace; char dispBack; // First letter of the Face and Background. Will be usefull to print the card
   //Card(); //Blank constructor to initialize a random card.
   
public:
    void turnFaceUp(){isTurnedUp = false;}
    void turnFaceDown(){isTurnedUp = true;}
    const int getNRows(){ return ROWS;}
    //string* getCardUncovered(){return cardUncovered;}
    void print()const;
    string operator()(int) const;
    operator FaceAnimal()const {return this->enumFace;} //cast operator to FaceAnimal
    operator FaceBackground()const {return this->enumBack;} //cast operator to FaceBackground
    friend ostream& operator<<(ostream&, const Card&);
    
private: Card(FaceAnimal, FaceBackground);
    
};

#endif /* CARD_H */

