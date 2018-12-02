
#include "CardDeck.h"
#include <iostream>
#include "Card.h"

using namespace std;
class Card;

CardDeck* CardDeck::cardD = nullptr;

CardDeck:: CardDeck(){

    for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
               Card *cardPtr = new Card(static_cast<FaceAnimal> (i),static_cast<FaceBackground> (j));
               deck.push_back(*cardPtr);
            }
    }
}

CardDeck &CardDeck::make_CardDeck(){
    
    if(cardD == nullptr){  
        cardD = new CardDeck();
    }
    return *cardD;
}

