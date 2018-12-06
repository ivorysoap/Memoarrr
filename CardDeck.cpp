//#define TEST_CARDDECK
#include "CardDeck.h"
#include <iostream>
#include "Card.h"

using namespace std;
class Card;

#ifdef TEST_CARDDECK

int main(){

    CardDeck::cardD->make_CardDeck();
    
    for(int i=0; i<25; i++){
        Card *test = CardDeck::cardD->getNext();
        test->showCard();
   cout << *test<< endl;
    }
}
#endif

CardDeck* CardDeck::cardD = nullptr;

CardDeck:: CardDeck(){

    //generates all 25 cards and push them in deck
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            Card cd(static_cast<FaceAnimal> (i),static_cast<FaceBackground> (j));
            deck.push_back(cd);
        }
    } it = deck.begin();
}

CardDeck &CardDeck::make_CardDeck(){
    
    if(CardDeck::cardD == nullptr){  
        CardDeck::cardD = new CardDeck();
    }
    return *CardDeck::cardD;
}

