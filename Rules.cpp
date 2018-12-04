
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
    int flag(0);
    for(Player p: myGame.getPlayersVect()){
        if(p.isActive()) flag++; 
    }
    if(flag>1) return false;
    else return true;
}

 const Player& Rules::getNextPlayer(Game& myGame){
     
     if(ptr==nullptr){
        it = myGame.getPlayersVect().begin();
     }
     ++it;
     ptr = &(*it); 
     return *ptr;
 }
