
/* 
 * File:   CardDeck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 02:02
 */
#include <iostream>
using namespace std;

#ifndef CARDDECK_H
#define CARDDECK_H

class CardDeck : public Deck<Card> {
    
    void shuffle();
    Card* getNext();
    bool isEmpty() const; 
    
public:
    static CardDeck& make_CardDeck();
};

#endif /* CARDDECK_H */

