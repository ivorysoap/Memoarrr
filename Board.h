//
// Created by Ivor on 2018-11-09.
//

#ifndef MEMOARRR_BOARD_H
#define MEMOARRR_BOARD_H

#include <vector>
#include "Card.h"
#include "CardDeck.h"


class Board {

    const int ROWS = 5;
    const int COLUMNS = 5;

    CardDeck cardDeck;

    //2D vector. Holds a vector of five rows, each of which holds five <Card,bool> tuples.  The bool represents the facing-up status of the card.
    vector< vector<Card,bool> > board;

public:

    enum Letter {A, B, C, D, E};
    enum Number {ONE, TWO ,THREE, FOUR, FIVE};

    Board();

    bool isFaceUp(const Letter&, const Number&);

    bool turnFaceUp(const Letter&, const Number&);

    bool turnFaceDown(const Letter&, const Number&);

    void reset();

    void toString(); 

    //Getters, Setters below

    Card getNext(){ cardDeck.getNext(); }

};


#endif //MEMOARRR_BOARD_H
