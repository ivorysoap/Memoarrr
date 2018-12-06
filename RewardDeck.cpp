//#define TEST_REWARDDECK
#include "RewardDeck.h"
#include <iostream>
#include "Reward.h"

using namespace std;

class Reward;

#ifdef TEST_REWARDDECK
int main(){
        RewardDeck::rewardD->make_RewardDeck();
    
    for(int i=0; i<7; i++){
        Reward *test = RewardDeck::rewardD->getNext();
        cout << test->getRubies()<< endl;
    }
}

#endif
RewardDeck* RewardDeck::rewardD = nullptr;

RewardDeck::RewardDeck() {

    for (int one = 0; one < 3; one++) { //creates ONE ruby card
        Reward rOne(Rubies::ONE);
        deck.push_back(rOne);
    }

    for (int two = 0; two < 2; two++) { //creates TWO ruby card
        Reward rTwo(Rubies::TWO);
        deck.push_back(rTwo);
    }

    Reward rThree(Rubies::THREE); //creates THREE ruby card
    deck.push_back(rThree);

    Reward rFour(Rubies::FOUR); //creates THREE ruby card
    deck.push_back(rFour);
    
    it = deck.begin();
}

/**
 * Instantiate the RewardDeck (singleton).
 *
 * @return the instantiated RewardDeck
 */
RewardDeck& RewardDeck::make_RewardDeck() {
    if (rewardD == nullptr) {

        rewardD = new RewardDeck();

        return *rewardD;
    }

}

