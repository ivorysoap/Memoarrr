#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(FaceAnimal a, FaceBackground b){
    enumField = a; enumField2 = b;
    
    switch(enumField){
        
        case CRAB: dispFace = 'C';
        case PENGUIN: dispFace = 'P';
        case OCTOPUS: dispFace = 'O';
        case TURTLE: dispFace = 'T';
        case WALRUS: dispFace = 'W';     
    }
    
    switch(enumField2){
        
        case RED: dispBack = 'r';
        case GREEN: dispBack = 'g';
        case PURPLE: dispBack = 'p';
        case BLUE: dispBack = 'b';
        case YELLOW: dispBack = 'y';   
    }
    
}

ostream& operator<<(ostream& os, const Card& c){
 
}
