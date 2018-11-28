/*
 * File:   Deck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 01:49
 */
#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

template <class T> //template to pick class type Card or Reward
class Deck{

    vector<T> deck;

    Deck(int numItems=52);
    
public:

    void shuffle();

    bool isEmpty();

    T* getNext(){

        return nullptr;

    }

};

#endif /* DECK_H */

