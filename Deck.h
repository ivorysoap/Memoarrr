
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
protected: typename std::vector<T>:: iterator it;
protected: T* ptr; // pointer to collect address pointed by iterator it
protected: Deck(){it = deck.begin();}
 
public: 
    void shuffle() {random_shuffle(deck.begin(), deck.end());}
    bool isEmpty()const {return vector<T>::empty();}
    
    T* getNext(){
        if(it!=deck.end()){
            it++;
            ptr = &(*it);         
    return ptr;
    }else
    { return nullptr;}
    
    }
    virtual void abstract()=0;
    
};
#endif /* DECK_H */

