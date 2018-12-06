
#include "Player.h"
#include "Card.h"
#include "Reward.h"
#include "Deck.h"
#include "CardDeck.h"
#include "RewardDeck.h"
#include "Board.h"
#include "Game.h"
#include "Rules.h"
#include <iostream>
#include <vector>

#if !defined(TEST_BOARD)&& !defined(TEST_CARD)&& !defined(TEST_CARDDECK)&& !defined(TEST_GAME)&& !defined(TEST_PLAYER)&& !defined(TEST_REWARD)&& !defined(TEST_REWARDDECK)&& !defined(TEST_RULES)
#define RUN_MAIN
#endif

using namespace std;

#ifdef RUN_MAIN

//Main function is incomplete!

int main() {
    //instance varibles
    int inputNbPlayers;
    string inputPlayerName;
   
    cout << "****Welcome to Memoarrr!!!****" << endl << endl;
    
    cout << "Please select the number of players" << endl;
    cin >> inputNbPlayers;
    
    //setting the number of players
    while ((inputNbPlayers < 2) || (inputNbPlayers > 4)) {
        std::cout << "Invalid input! Please enter a digital value between 2 and 4 to select number of players" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> inputNbPlayers;
    }
    CardDeck::cardD->make_CardDeck();
    RewardDeck::rewardD->make_RewardDeck();
    Board* bd = new Board();
    Game myGame(bd); 
    
    //Setting player names
    for(int i=0; i<inputNbPlayers; i++){
        
        cout << "Enter name of player " << i+1 << endl;
        cin >>inputPlayerName;
        
        Player* newPlayer = new Player(inputPlayerName);
       
        myGame.addPlayer(*newPlayer);
        
        cin.clear();
        std::cin.ignore(256,'\n');
    }

   cout << myGame; //displaying game
   
    return 0;
}
#endif
