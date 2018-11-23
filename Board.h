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

    const int FACE_UP = 1;
    const int FACE_DOWN = 0;

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

    static Card* getCard(const Letter&, const Number&);  //Not sure why this method is static

    static void setCard(const Letter&, const Number&, Card*);  //Nor this one.  See .todo for more details

    void reset();

    void toString(); 

    //Getters, Setters below

    Card getNext(){ cardDeck.getNext(); }

};


#endif //MEMOARRR_BOARD_H
