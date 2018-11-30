#ifndef MEMOARRR_GAME_H
#define MEMOARRR_GAME_H


#include "Player.h"
#include "Card.h"
#include "Board.h"

class Game {
private:

    static Board board;
    int round;
    Card currentCard = nullptr, previousCard = nullptr;
    vector<Player> players;

public:

    int getRound();

    void addPlayer(const Player& plyr);

    Player& getPlayer(const Player::Side&);

    const Card* getPreviousCard();

    const Card* getCurrentCard();

    void setCurrentCard(const Card*);

    Card* getCard(){const Board::Letter&, const Board::Number&};

    void setCard(const Board::Letter&, const Board::Number&, Card*);

};


#endif //MEMOARRR_GAME_H
