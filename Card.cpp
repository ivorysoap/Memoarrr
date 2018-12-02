
#include "Card.h"
#include <iostream>

using namespace std;

const string Card::cardUncovered[3] = {"zzz", "zzz", "zzz"};

Card::Card(FaceAnimal a, FaceBackground b): enumFace(a), enumBack(b){
    
    switch(enumFace){
        
        case FaceAnimal::CRAB: dispFace = 'C';
        case FaceAnimal::PENGUIN: dispFace = 'P';
        case FaceAnimal::OCTOPUS: dispFace = 'O';
        case FaceAnimal::TURTLE: dispFace = 'T';
        case FaceAnimal::WALRUS: dispFace = 'W';     
    }
    
    switch(enumBack){
        
        case FaceBackground::RED: dispBack = 'r';
        case FaceBackground::GREEN: dispBack = 'g';
        case FaceBackground::PURPLE: dispBack = 'p';
        case FaceBackground::BLUE: dispBack = 'b';
        case FaceBackground::YELLOW: dispBack = 'y';   
    }
    
    for(int i = 0; i<3; i++){       //Loop to fill the 3x3 array cardDisp
        for(int j = 0; j<3; j++){
            if((i==1) && (j==1)) cardDisp[i][j] = dispFace;
            else
            cardDisp[i][j] = dispBack;
        }
    }
}

string Card::operator()(int index)const{ //Overload of operator () in order to print out a row of the card as a string
    
    string rowString;
    switch(index){
        case 0:
            for(int i=0; i<3; i++){
                rowString.push_back(Card::cardDisp[0][i]);
            }
        case 1:
            for(int i=0; i<3; i++){
                rowString.push_back(Card::cardDisp[1][i]);
            }
        case 2:
            for(int i=0; i<3; i++){
                rowString.push_back(Card::cardDisp[2][i]);
            }    
    }
    return rowString;
}

ostream& operator<<(ostream& os, const Card& c){
    
    if(c.isTurnedUp == true){
        
    for(int i=0; i<Card::ROWS; i++){
        os << c(i)<< endl; }
    }
    
    else {
        for(int i=0; i<Card::ROWS; i++){
        os << Card::cardUncovered[i]<< endl; }   
    }
    return os;
}
