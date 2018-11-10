
/* 
 * File:   Card.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 00:45
 */
#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card{
   
    enum FaceAnimal {CRAB, PENGUIN, OCTOPUS, TURTLE, WALRUS} const enumField;
    enum FaceBackground {RED, GREEN, PURPLE, BLUE, YELLOW} const enumField2;
    
   Card(FaceAnimal a, FaceBackground b): enumField(a), enumField2(b) {}//private constructor
    
};

#endif /* CARD_H */

