#include "RewardDeck.h"
#include <iostream>
#include "Reward.h"


using namespace std;

class Reward;

RewardDeck* RewardDeck::rewardD = nullptr;

RewardDeck::RewardDeck() {

    for (int one = 0; one < 3; one++) {
        Reward rOne(Rubies::ONE);
        deck.push_back(rOne);
    }

    for (int two = 0; two < 2; two++) {
        Reward rTwo(Rubies::TWO);
        deck.push_back(rTwo);
    }

    Reward rThree(Rubies::THREE);
    deck.push_back(rThree);

    Reward rFour(Rubies::FOUR);
    deck.push_back(rFour);
}

RewardDeck& RewardDeck::make_RewardDeck() {
    if (rewardD == nullptr) {

        rewardD = new RewardDeck();

        return *rewardD;
    }

}

