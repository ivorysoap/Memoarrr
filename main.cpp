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
#include <stack>
using namespace std;

int main() {
    //instance varibles
    int inputNbPlayers;
    string inputPlayerName;
    //stack<Player> stackPlayers;
    
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
    //CardDeck::cardD->shuffle();
    RewardDeck::rewardD->make_RewardDeck();
    Board* bd = new Board();
    Game myGame(bd); 
    
    //Setting player names
    for(int i=0; i<inputNbPlayers; i++){
        
        cout << "Enter name of player " << i+1 << endl;
        cin >>inputPlayerName;
        
        Player* newPlayer = new Player(inputPlayerName);
        //stackPlayers.push(*newPlayer);
        myGame.addPlayer(*newPlayer);
        //stackPlayers.pop();
        cin.clear();
        std::cin.ignore(256,'\n');
    }
    //cout << bd;
    //cout << myGame; //displaying game
   
    return 0;
}