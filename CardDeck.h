
/* 
 * File:   CardDeck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 02:02
 */

#ifndef CARDDECK_H
#define CARDDECK_H
#include "Deck.h"
#include <stack>

using namespace std;

class CardDeck : public Deck<Card> {
    
    static CardDeck* cardD;
    CardDeck(){}
    
public:
    static CardDeck& make_CardDeck();
};

#endif /* CARDDECK_H */

