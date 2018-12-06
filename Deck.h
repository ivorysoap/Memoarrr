
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

 
public: 
    void shuffle() {random_shuffle(deck.begin(), deck.end());} //method throw errors. Have to do with swapping elems in vector.
    bool isEmpty()const {return deck.empty();}
    
    T* getNext() {

        if (it != deck.end()) {
            ptr = &(*it); //in order to return a pointer
            it++;
            return ptr;
        } else {
            return nullptr;
        }
    }
    
    virtual void abstract() = 0; //virtual pure to make class Deck abstract
    
};
#endif /* DECK_H */

