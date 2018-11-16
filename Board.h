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

    vector< vector<Card,bool> > board;

public:

    enum Letter {A, B, C, D, E};
    enum Number {ONE, TWO ,THREE, FOUR, FIVE};

    Board(const CardDeck&);

    bool isFaceUp(const Letter&, const Number&);

    bool turnFaceUp(const Letter&, const Number&);

    bool turnFaceDown(const Letter&, const Number&);

    void reset();

    void toString();

};


#endif //MEMOARRR_BOARD_H
