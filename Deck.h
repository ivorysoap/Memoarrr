
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

protected: typename std::vector<T> deck;
protected: typename std::vector<T>:: iterator it;
protected: T* ptr; // pointer to collect address pointed by iterator it
protected: Deck(){}
protected: vector<T>& getDeck(){return deck;}
 
public: 
    void shuffle() {random_shuffle(deck.begin(), deck.end());}
    bool isEmpty()const {return deck.empty();}
    
    T* getNext() {

        if (it != deck.end()) {
            ptr = &(*it);
            it++;
            return ptr;
        } else {
            return nullptr;
        }
    }
    
    virtual void abstract() = 0;
    
};
#endif /* DECK_H */

