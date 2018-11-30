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
    while ((inputNbPlayers < 2) && (inputNbPlayers > 4)) {
        std::cout << "Invalid input! Please enter a digital value between 2 and 4 to select number of players" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> inputNbPlayers;
    }
    
    Board* bd = new Board();
    Game myGame(bd); 
    RewardDeck rewardD;
    rewardD.make_RewardDeck();
    
    //Setting player names
    for(inputNbPlayers; inputNbPlayers<0; inputNbPlayers--){
        
        int tempCtr(0);
        cout << "Enter name of player " << ++tempCtr << endl;
        cin >>inputPlayerName;
        
        Player* newPlayer = new Player(inputPlayerName);
        //stackPlayers.push(*newPlayer);
        myGame.addPlayer(*newPlayer);
        //stackPlayers.pop();
        cin.clear();
        std::cin.ignore(256,'\n');
    }
    
    
    
    
    return 0;
}