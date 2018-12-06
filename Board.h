#ifndef MEMOARRR_BOARD_H
#define MEMOARRR_BOARD_H

#include <vector>
#include "Card.h"
#include "CardDeck.h"

class Board {

    static const int ROWS = 5;
    static const int COLUMNS = 5;
    static const int HOLE_ROW  = 3;
    static const int HOLE_COLUMN = 3;
public: Board();
    //2D vector. Holds a vector of five rows, each of which holds five pointers to Cards.
    vector< vector<Card*> > board;

public:
    enum Letter {A = 1, B, C, D, E};
    enum Number {ONE = 1, TWO ,THREE, FOUR, FIVE};

    bool isFaceUp(const Letter&, const Number&);

    bool turnFaceUp(const Letter&, const Number&);

    bool turnFaceDown(const Letter&, const Number&);

    Card* getCard(const Letter&, const Number&);

    void setCard(const Letter&, const Number&, Card*);

    void reset();

    friend ostream& operator<<(ostream& os, const Board& b) {

        for (int i = 0; i < 5; i++) {
            os << endl;
            for (int j = 0; j < 5; j++) {
                os <<*(b.board.at(i).at(j));
            }
        }
        return os;
    }
};

#endif //MEMOARRR_BOARD_H
