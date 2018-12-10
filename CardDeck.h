
/* 
 * File:   CardDeck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 02:02
 */

#ifndef CARDDECK_H
#define CARDDECK_H
#include "Deck.h"
#include <algorithm>
#include <random>

using namespace std;

class CardDeck : public Deck<Card> {
    CardDeck();
    void abstract()override {};
    //~CardDeck();
public:
    
    static CardDeck* cardD;
    static CardDeck& make_CardDeck();
};

#endif /* CARDDECK_H */

