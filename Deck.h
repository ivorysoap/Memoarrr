
/* 
 * File:   Deck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 01:49
 */
using namespace std;

#ifndef DECK_H
#define DECK_H

template <class T> //template to pick class type Card or Reward
class Deck{
    
public:
   virtual void shuffle() = 0;
   virtual T* getNext() = 0;
   virtual bool isEmpty() const = 0;
};

#endif /* DECK_H */

