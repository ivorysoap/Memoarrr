#include "RewardDeck.h"
#include <iostream>
#include "Reward.h"


using namespace std;

class Reward;

RewardDeck* RewardDeck::rewardD = nullptr;

RewardDeck& RewardDeck::make_RewardDeck(){
    if(rewardD == nullptr){
        
        rewardD = new RewardDeck();
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
               Reward *rewardPtr = new Reward(static_cast<FaceAnimal> (i),static_cast<FaceBackground> (j));
               rewardD->deck.push(*rewardPtr);
            }
        }
    }
    return *rewardD;
}



