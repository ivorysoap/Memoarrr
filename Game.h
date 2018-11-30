#ifndef MEMOARRR_GAME_H
#define MEMOARRR_GAME_H


#include "Player.h"
#include "Card.h"
#include "Board.h"

class Game {
private:

    static Board* board;
    int round;
    Card* currentCard = nullptr;
    Card* previousCard = nullptr;
    vector<Player> players;

public:
    
    Game(Board* bd){board = bd;}

    int getRound();

    void addPlayer(const Player& plyr);

    Player& getPlayer(const Player::Side&);
    
    vector<Player>& getPlayersVect(){return players;}

    const Card* getPreviousCard();

    const Card* getCurrentCard();

    void setCurrentCard(Card*);

    Card* getCard(const Board::Letter&, const Board::Number&);

    void setCard(const Board::Letter&, const Board::Number&, Card*);
    
    friend ostream& operator<<(ostream&, const Rules&);

};


#endif //MEMOARRR_GAME_H
