#include <iostream>
#include <vector>
#include "Board.h"
#include "Card.h"

using namespace std;

Board::Board(){
    
    cd.make_CardDeck();

    for(int i = 0; i < ROWS; i++){
        vector<Card*> row;
        for(int j = 0; j < COLUMNS; j++){

            //Filling each of the 5 rows with 5 cards, leaving a hole in the centre.
            (i == 2 && j == 2) ? row.push_back(nullptr) : row.push_back(cd.getNext());

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
ostream& operator<<(ostream& os, const Board& b){

    for(int i=0; i < 5; i++){
        for(int j=0; j< 5; j++){
            os << *(b.board.at(i).at(j)) << endl;
        }
    }
    return os;
}

