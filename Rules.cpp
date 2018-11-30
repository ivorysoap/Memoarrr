
#include "Rules.h"
#include "Game.h"
#include <iostream>

bool Rules::isValid( Game& myGame){
    
    if(myGame.getPreviousCard()->getFace() == myGame.getCurrentCard()->getFace()) return true;
    else if(myGame.getPreviousCard()->getBack() == myGame.getCurrentCard()->getBack()) return true;
    else return false;
}

bool Rules:: gameOver(Game& myGame){
    if(myGame.getRound() > 6) return true;
}
bool Rules:: roundOver(Game& myGame){
    
}