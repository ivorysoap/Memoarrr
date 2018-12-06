
/* 
 * File:   Card.h
 * Author: Boris Nz
 * Created on 10 novembre 2018, 00:45
 */

#ifndef CARD_H
#define CARD_H
#include <iostream>

using namespace std;

 enum class FaceAnimal {CRAB, PENGUIN, OCTOPUS, TURTLE, WALRUS};  ///Enumeration of the possible animals.
 enum class FaceBackground {RED, GREEN, PURPLE, BLUE, YELLOW}; ///Enumeraton of the possible backgrounds.

class Card{
   
    const FaceAnimal enumFace;
    const FaceBackground enumBack;
    friend class TestCard;
    friend class CardDeck;
    const static int ROWS = 3;
    bool isTurnedUp;
    const static string cardUncovered[3];
    char dispFace; char dispBack; // First letter of the Face and Background. Will be usefull to print the card
    char cardDisp[3][3]; //not used

private: Card(FaceAnimal, FaceBackground);

public:
    void showCard(){isTurnedUp = true;} ///Turn card face-up.
    void hideCard(){isTurnedUp = false;} ///Turn card face-down.
    bool getIsTurnedUp() const{return isTurnedUp;} ///Getter for face-up status.
    const int getNRows(){ return ROWS;}
    FaceAnimal getFace()const {return this->enumFace;} ///Getter for card animal.
    FaceBackground getBack()const {return this->enumBack;} ///Getter for card background.
    string operator()(int) const;
    operator FaceAnimal()const {return this->enumFace;} ///cast operator to FaceAnimal
    operator FaceBackground()const {return this->enumBack;} ///cast operator to FaceBackground

    ///Overload of << operator for printing purposes.
    friend ostream& operator<<(ostream &os, Card &c){
    
   if (c.isTurnedUp == true){
    for(int i=0; i<Card::ROWS; i++){
        os <<" "<< c(i)<< endl; }     //uses overloaded () operator to fetch string at index
    }
    else 
    {   for(int i=0; i<Card::ROWS; i++){
        os <<" "<< Card::cardUncovered[i] << endl; }   
    }
    return os;
}

};

#endif /* CARD_H */


