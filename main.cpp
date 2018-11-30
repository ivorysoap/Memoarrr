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
using namespace std;

int main() {
    //instance varibles
    int inputNbPlayers;
    string inputPlayerName;
    
    cout << "****Welcome to Memoarrr!!!****" << endl << endl;
    
    cout << "Please select the number of players" << endl;
    cin >> inputNbPlayers;
    
    while ((inputNbPlayers < 2) && (inputNbPlayers > 4)) {
        std::cout << "Invalid input! Please enter a digital value between 2 and 4 to select number of players" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> inputNbPlayers;
    }
    
    Game memoarrr();
    
    while(inputNbPlayers){
        int tempCtr(0);
        cout << "Enter name of player " << ++tempCtr << endl;
        cin >>inputPlayerName;
        
    
        inputNbPlayers--;
    }
    
    
    
    
    return 0;
}