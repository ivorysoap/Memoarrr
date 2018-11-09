//
// Created by Ivor on 2018-11-09.
//

#ifndef MEMOARRR_BOARD_H
#define MEMOARRR_BOARD_H


class Board {

public:

    bool isFaceUp(const Letter&, const Number&);

    bool turnFaceUp(const Letter&, const Number&);

    bool turnFaceDown(const Letter&, const Number&);

    void reset();

    void toString();

};


#endif //MEMOARRR_BOARD_H
