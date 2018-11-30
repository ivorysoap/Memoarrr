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
 
public: 
    void shuffle() {random_shuffle(deck.begin(), deck.end());}
    bool isEmpty()const {vector<T>::empty();}

    T* getNext(){ 
        T* next;
        if (!(this->isEmpty())){
            
            
            next = &deck.back();
            return next;
        }else
        {return next = nullptr;}
    }

};
#endif /* DECK_H */

