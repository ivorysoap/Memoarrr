
/* 
 * File:   RewardDeck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 15:05
 */

#ifndef REWARDDECK_H
#define REWARDDECK_H

class RewardDeck : public Deck<Reward> {
    
    void shuffle()override;
    Card* getNext()override;
    bool isEmpty() const override ; 
    
public:
    static RewardDeck& make_RewardDeck();
};

#endif /* REWARDDECK_H */

