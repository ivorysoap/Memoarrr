#include <iosteam>
#include <vector>
#include <tuple>
#include "Board.h"
#include "Card.h"

using namespace std;

Board::Board(const CardDeck &deck){

    for(int i = 0; i < ROWS; i++){
        vector<Card,bool> row;
        for(int j = 0; j < COLUMNS; j++){
            row.push_back(deck.getNext());
        }
        board.push_back(row);
    }

}

bool Board::isFaceUp(const Board::Letter &letter, const Board::Number &number){

    return get<1>(board[letter][number]); //returns the bool (second part of the tuple) of the Card in question

}

bool Board::turnFaceUp(const Board::Letter &letter, const Board::Number &number){

    //Unimplemented

}

bool Board::turnFaceDown(const Board::Letter &letter, const Board::Number &number){

    //Unimplemented

}

void Board::reset(){

    //Unimplemented

}

void Board::toString(){

    //Unimplemented

}

