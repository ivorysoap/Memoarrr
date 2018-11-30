#include <iostream>
#include <vector>
#include "Board.h"
#include "Card.h"

using namespace std;

Board::Board(){

    for(int i = 0; i < ROWS; i++){
        vector<Card*> row;
        for(int j = 0; j < COLUMNS; j++){
            row.push_back(cd.getNext());  //Filling each of the 5 rows with 5 cards
            //TODO: Leave a space in the middle of the board.
        }
        board.push_back(row); //Adding the 5 rows to the board vector.
    }
}

bool Board::isFaceUp(const Board::Letter &letter, const Board::Number &number){

    return board[letter][number]->getIsTurnedUp(); //returns the isTurnedUp value belonging to the Card in question

}

bool Board::turnFaceUp(const Board::Letter &letter, const Board::Number &number){

    if(!board[letter][number]->getIsTurnedUp()){

        board[letter][number]->turnFaceUp();
        return true;

    }
    else{
        return false;
    }
}

bool Board::turnFaceDown(const Board::Letter &letter, const Board::Number &number){

    if(board[letter][number]->getIsTurnedUp()){

        board[letter][number]->turnFaceDown();
        return true;
    }
    else{
        return false;
    }
}

Card* Board::getCard(const Board::Letter &letter, const Board::Number &number){

    return board[letter][number];

}

void Board::setCard(const Board::Letter &letter, const Board::Number &number, Card *card){

    board[letter][number] = card;

}

void Board::reset(){

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            board[i][j]->turnFaceDown();

}



