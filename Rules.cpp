//#define TEST_RULES

#include "Rules.h"
#include "Game.h"
#include <iostream>

using namespace std;

#ifdef TEST_RULES
int main(){
    
    CardDeck::cardD->make_CardDeck();
    Board *bd = new Board();
    Game myGame(bd);
    Player one("Victor Hugo");
    Player two("Guy de Maupassant");
    myGame.addPlayer(one);
    myGame.addPlayer(two);
    Rules myRules;
    cout<< myRules.getNextPlayer(myGame);
}
#endif

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
    else return true; //flag returns 0 if no player is active
}

Player& Rules::getNextPlayer(Game& myGame){ //logic similar to getNext() in Deck

    if (ptr == nullptr) {
        it = myGame.getPlayersVect().begin();
    }
    if (it != myGame.getPlayersVect().end()) {
        ptr = &(*it);
        it++;
        return *ptr;
    } else { ptr == nullptr;
        return *ptr;
 }
}
