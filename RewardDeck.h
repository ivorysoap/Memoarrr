
/* 
 * File:   RewardDeck.h
 * Author: Boris Nz
 *
 * Created on 10 novembre 2018, 15:05
 */

#ifndef REWARDDECK_H
#define REWARDDECK_H
#include "Deck.h"

class RewardDeck : public Deck<Reward> {
    
    static RewardDeck* rewardD;
    //RewardDeck():Deck(){}
    
public:
    static RewardDeck& make_RewardDeck();
    void abstract() override{};
};

#endif /* REWARDDECK_H */

