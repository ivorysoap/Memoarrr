#ifndef MEMOARRR_GAME_H
#define MEMOARRR_GAME_H
#include "Player.h"
#include "Card.h"
#include "Board.h"

class Game {
private:

    Board* myBoard;
    int round;
    Card* currentCard = nullptr;
    Card* previousCard = nullptr;
    vector<Player> players;

public:
    
    Game(Board* bd){myBoard = bd;}

    int getRound();

    void addPlayer(const Player& player);

    Player& getPlayer(const Player::Side&);
    
    vector<Player>& getPlayersVect(){ return this->players; }

    const Card* getPreviousCard();

    const Card* getCurrentCard();

    void setCurrentCard(Card*);

    Card* getCard(const Board::Letter&, const Board::Number&);

    void setCard(const Board::Letter&, const Board::Number&, Card*);
    
    Board& getBoard(){return *myBoard;}
    
    friend ostream& operator<<(ostream&, const Game&);

};


#endif //MEMOARRR_GAME_H
