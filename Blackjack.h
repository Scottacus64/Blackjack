#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Hand.h"

class Blackjack
{
public:
    Blackjack();
    ~Blackjack();
    void playGame();
    int addUpHand(Hand hand);
    bool bust = false;
    bool hit = true;
    string gameOutcome();
    void playerTurn();
    void dealerTurn();
    void newGame();

private:
    int dealerScore;
    int playerScore;
    bool playAgain = true;
    Hand playerHand;
    Hand dealerHand;
    Deck blackjackDeck;
};
#endif BLACKJACK_H