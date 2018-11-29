#include "RewardDeck.h"
#include <iostream>
#include "Reward.h"


using namespace std;

class Reward;

RewardDeck* RewardDeck::rewardD = nullptr;

RewardDeck& RewardDeck::make_RewardDeck(){
    if(rewardD == nullptr){
        
        rewardD = new RewardDeck();
        for(int one=0; one<3; one++){
            Reward rOne(Rubies::ONE);
            rewardD->deck.push(rOne);
            }
        
        for(int two=0; two<2; two++){
            Reward rTwo(Rubies::TWO);
            rewardD->deck.push(rTwo);
            }
        
        Reward rThree (Rubies::THREE);
        rewardD->deck.push(rThree);
        
        Reward rFour (Rubies::FOUR);
        rewardD->deck.push(rFour);
        }
    
    return *rewardD;
}



