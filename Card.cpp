//#define TEST_CARD
#include "Card.h"
#include <iostream>

using namespace std;
class Card;

#ifdef TEST_CARD
class TestCard{
public: 
    Card *test;
    TestCard(){
    Card c(FaceAnimal::OCTOPUS, FaceBackground::PURPLE);
    test = &c;
}
    Card& getTest(){return *test;}
};
int main(){
    TestCard cd;
    cd.getTest().showCard();
    cout << cd.getTest();
}
#endif

const string Card::cardUncovered[3] = {"zzz", "zzz", "zzz"};

Card::Card(FaceAnimal a, FaceBackground b): enumFace(a), enumBack(b), isTurnedUp(false){
    
    switch(enumFace){
        
        case FaceAnimal::CRAB: dispFace = 'C'; break;
        case FaceAnimal::PENGUIN: dispFace = 'P'; break;
        case FaceAnimal::OCTOPUS: dispFace = 'O'; break;
        case FaceAnimal::TURTLE: dispFace = 'T'; break;
        case FaceAnimal::WALRUS: dispFace = 'W'; break;
    }
    switch(enumBack){
        
        case FaceBackground::RED: dispBack = 'r'; break;
        case FaceBackground::GREEN: dispBack = 'g'; break;
        case FaceBackground::PURPLE: dispBack = 'p'; break;
        case FaceBackground::BLUE: dispBack = 'b'; break;
        case FaceBackground::YELLOW: dispBack = 'y'; break;
    } 
    
}
string Card::operator()(int index)const{ //Overload of operator () in order to print out a row of the card as a string
    
    string rowString;
    switch(index){
        case 0:
            for(int j=0; j<3; j++){
                rowString.push_back(dispBack);
            }
            break;
        case 1:
            for(int j=0; j<3; j++){
                 if(j==1){ rowString.push_back(dispFace);}
                 else
                rowString.push_back(dispBack);
            }
            break;
        case 2:
            for(int j=0; j<3; j++){
                rowString.push_back(dispBack);
            }
            break;
    }
    return rowString;
}

