#include <iostream>
#include <vector>
#include "Board.h"
#include "Card.h"

using namespace std;

Board::Board(){

    for(int i = 0; i < ROWS; i++){
        vector<pair<Card*,bool>> row;
        for(int j = 0; j < COLUMNS; j++){
            row.push_back(make_pair(cardDeck.getNext(), false));  //This needs fixing.  Maybe don't use a CardDeck since its getNext() method is private?
        }
        board.push_back(row);
    }
}

bool Board::isFaceUp(const Board::Letter &letter, const Board::Number &number){

    return get<1>(board[letter][number]); //returns the bool (second part of the tuple) of the Card in question

}

bool Board::turnFaceUp(const Board::Letter &letter, const Board::Number &number){

    if(get<1>(board[letter][number]) == FACE_DOWN){

        get<1>(board[letter][number]) == FACE_UP;
        return true;

    }
    else{
        return false;
    }

}

bool Board::turnFaceDown(const Board::Letter &letter, const Board::Number &number){

    if(get<1>(board[letter][number]) == FACE_UP){

        get<1>(board[letter][number]) == FACE_DOWN;
        return true;

    }
    else{
        return false;
    }

}

static Card* Board::getCard(const Board::Letter &letter, const Board::Number &number){

    return *get<0>(board[letter][number]);

}

static void Board::setCard(const Board::Letter &letter, const Board::Number &number, Card *card){

    get<0>(board[letter][number]) = card;

}

void Board::reset(){

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            get<1>(board[i][j]) = FACE_DOWN;

    //This would be much cleaner if we could call turnFaceDown() for each element instead.


}

void Board::toString(){

    //Unimplemented

}

