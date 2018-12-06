
//#define TEST_BOARD

#include <iostream>
#include <vector>
#include <exception>
#include "Board.h"
#include "Card.h"

using namespace std;

#ifdef TEST_BOARD
main(){
    CardDeck::cardD->make_CardDeck();
    Board boarde;
    Board::Letter l = Board::A;
    Board::Number n = Board::ONE;
    Board::Letter l2 = Board::B;
    Board::Number n2 = Board::TWO;
    
    boarde.turnFaceUp(l,n);
    boarde.turnFaceUp(l,n2);
    boarde.turnFaceUp(l2,n);
    boarde.turnFaceUp(l2,n2);
    cout << boarde;
}
#endif
struct no_more_cards : public exception {
    const char * what () const throw () {
        return "No cards remaining in deck.";
    }
};

Board::Board(){
    
    for(int i = 1; i <= ROWS; i++){
        vector<Card*> row;
        for(int j = 1; j <= COLUMNS; j++){

            if(i == HOLE_ROW && j == HOLE_COLUMN){
                row.push_back(nullptr); //Case for empty hole in middle of board
            }
            else {
                //Get a card from cd and check to see if it is valid.  If a nullptr is obtained, it means cd is empty.  Throw an exception.
                //Card *distributedCard;
                //distributedCard = CardDeck::cardD->getNext();
                try{
                    
                if(CardDeck::cardD->getNext() == nullptr){
                    throw no_more_cards();}
                 
                //catch (no_more_cards& e){}
                else
                    row.push_back(CardDeck::cardD->getNext());
                } catch (no_more_cards& e){}
            }
        }
        board.push_back(row); //Adding the 5 rows to the board vector.
    }
}

bool Board::isFaceUp(const Letter &letter, const Number &number){

    return board[letter][number]->getIsTurnedUp(); //returns the isTurnedUp value belonging to the Card in question

}

bool Board::turnFaceUp(const Letter &letter, const Number &number){

    if(!board[letter][number]->getIsTurnedUp()){

        board[letter][number]->showCard();
        return true;
    }
    else{
        return false;
    }
}

bool Board::turnFaceDown(const Letter &letter, const Number &number){

    if(board[letter][number]->getIsTurnedUp()){

        board[letter][number]->hideCard();
        return true;
    }
    else{
        return false;
    }
}

Card* Board::getCard(const Letter &letter, const Number &number){

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

void Board::setCard(const Letter &letter, const Number &number, Card *card){

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
            board[i][j]->hideCard();
}



