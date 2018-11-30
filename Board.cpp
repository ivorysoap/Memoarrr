#include <iostream>
#include <vector>
#include <exception>
#include "Board.h"
#include "Card.h"

using namespace std;

struct no_more_cards : public exception {
    const char * what () const throw () {
        return "No cards remaining in deck.";
    }
};

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

    if(letter >= 1
       && letter <= ROWS
       && number >= 0
       && number <= COLUMNS
       && letter != HOLE_ROW
       && number != HOLE_COLUMN)
        return board[letter][number];
    else
        throw out_of_range("Location given out of board range.");

}

void Board::setCard(const Board::Letter &letter, const Board::Number &number, Card *card){

    if(letter >= 1
       && letter <= ROWS
       && number >= 0
       && number <= COLUMNS
       && letter != HOLE_ROW
       && number != HOLE_COLUMN)
        board[letter][number] = card;
    else
        throw out_of_range("Location given out of board range.");

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

