#ifndef MEMOARRR_GAME_H
#define MEMOARRR_GAME_H


#include "Player.h"
#include "Card.h"
#include "Board.h"

class Game {
private:

    static Board board;
    int round;
    vector<Player> players;

public:

    int getRound();

    void addPlayer(const Player&);

    Player& getPlayer(Side);

    const Card* getPreviousCard();

    const Card* getCurrentCard();

    void setCurrentCard(const Card*);

    void toString();

};


#endif //MEMOARRR_GAME_H
