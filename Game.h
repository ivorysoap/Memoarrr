#ifndef MEMOARRR_GAME_H
#define MEMOARRR_GAME_H


class Game {
private:

    final Board board;

public:

    int getRound();

    void addPlayer();

    Player& getPlayer();

    const Card* getPreviousCard();

    const Card* getCurrentCard();

    void setCurrentCard(const Card*);

    void toString();

};


#endif //MEMOARRR_GAME_H
