#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Hand.h"

class Blackjack
{
public:
    Blackjack();
    ~Blackjack();
    void playGame();
    int addUpHand(Hand hand, int player);
    bool bust = false;
    bool hit = true;
    int gameOutcome();
    void playerTurn();
    int dealerTurn();
    void newGame();
    Hand* getPlayerHand();
    Hand* getDealerHand();
    int playerHit();
    int getWin();
    int getLoss();
    int getPush();

private:
    int dealerAces = 0;
    int playerAces = 0;
    int dealerScore;
    int playerScore;
    bool playAgain = true;
    Hand playerHand;
    Hand dealerHand;
    Deck blackjackDeck;
    int win = 0;
    int loss = 0;
    int push = 0;
};
#endif // BLACKJACK_H