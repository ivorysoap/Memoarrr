#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck(int numItems=52) {

    for(int i = 0; i < numItems; i++){
        Deck::deck.push_back(new Card()); //Needs to be fixed to allow for the general case (creating <T> object) rather than just Card!
    }

}

void Deck::shuffle(){

    //Unimplemented

}

bool Deck::isEmpty(){

    //Unimplemented
    return false;

}

template <class T>
T* Deck::getNext(){

    //Unimplemented
    return nullptr;

}