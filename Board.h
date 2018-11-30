#ifndef MEMOARRR_BOARD_H
#define MEMOARRR_BOARD_H

#include <vector>
#include <tuple>
#include "Card.h"
#include "CardDeck.h"


class Board {

    static const int ROWS = 5;
    static const int COLUMNS = 5;
    static const int HOLE_ROW  = 3;
    static const int HOLE_COLUMN = 3;

    CardDeck cd;

    //2D vector. Holds a vector of five rows, each of which holds five pointers to Cards.
    static vector< vector<Card*> > board;

public:

    enum Letter {A = 1, B, C, D, E};
    enum Number {ONE = 1, TWO ,THREE, FOUR, FIVE};

    Board(); //Default constructor

    bool isFaceUp(const Letter&, const Number&);

    bool turnFaceUp(const Letter&, const Number&);

    bool turnFaceDown(const Letter&, const Number&);

    Card* getCard(const Letter&, const Number&);  //Not sure why this method is static

    void setCard(const Letter&, const Number&, Card*);  //Nor this one.  See .todo for more details

    void reset();

    friend ostream& operator<<(ostream&, const Board&);

};


#endif //MEMOARRR_BOARD_H
