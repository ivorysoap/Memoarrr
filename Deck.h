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
#include <algorithm>
#include <random>
#include "Card.h"
#include "Reward.h"

using namespace std;

template <class T> //template to pick class type Card or Reward
class Deck{

protected: vector<T> deck;
protected: vector<T>::reverse_iterator rit;

private:Deck(){rit = deck.rbegin();}
 
public: 
    void shuffle() {random_shuffle(deck.begin(), deck.end());}
    bool isEmpty()const {return vector<T>::empty();}

    T* getNext(){}

};
#endif /* DECK_H */

