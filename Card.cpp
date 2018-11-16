#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(FaceAnimal a, FaceBackground b): enumField(a), enumField2(b) {
    
}

ostream& operator<<(ostream& os, const Card& c){
    if(Card::isFaceUp){
        
    }
}
