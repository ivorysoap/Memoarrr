
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

int main();
char getUserInput(string message);

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
    CardDeck cd = CardDeck::cardD->make_CardDeck();
    RewardDeck rd = RewardDeck::rewardD->make_RewardDeck();
    Board* bd = new Board();
    Game myGame(bd);
    Rules myRules;
    
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

    while(!myRules.gameOver(myGame)){

        bd->reset(); ///Turn all cards face-down

        for(Player p : myGame.getPlayersVect()) {

            p.setActive(true); ///Set all players in game as active

            //REVEAL 3 CARDS CLOSEST TO PLAYER (unimplemented)

        }

        while(!myRules.roundOver(myGame)){

            Board::Number number = static_cast<Board::Number>(getUserInput("Please select a card by entering a row between 1 and 5: "));
            Board::Letter letter = static_cast<Board::Letter>(getUserInput("Please select a card by entering a col between A and E: "));

            myGame.setCurrentCard(myGame.getCard(letter, number)); ///Setting chosen card as current card

            bd->turnFaceUp(letter, number);

            if(!myRules.isValid(myGame)){

                ///If picked card does not match current card, disqualify the player and turn the card face-down.
                myRules.getCurrentPlayer()->setActive(false);
                bd->turnFaceDown(letter, number);

            }

            cout << myGame;

            myRules.getNextPlayer(myGame); ///Advance to next player

        }

        ///Attribute the necessary reward to the winner

        Reward *reward = rd.getNext();

        cout << "The winner is " << myRules.getNextPlayer(myGame).getName() << "!  They will receive " << *reward << " rubies!" << endl;
        myRules.getCurrentPlayer()->addReward(*reward);

    }

    //Game Over!
    //Print list of players and their rubies (UNIMPLEMENTED)
    //Print overall winner (UNIMPLEMENTED)
   
    return 0;
}

char getUserInput(const string message){

    if(message != "")
        cout << message;
    char userinput;
    cin >> userinput;

    return userinput;

}


#endif
