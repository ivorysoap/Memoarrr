
#include "Deck.h"
#include <iostream>

template <class T>
T* Deck<T>::getNext() {
    
    if(rit!=deck.rend()){
    return rit++;
    }else
    { return nullptr;}
}
