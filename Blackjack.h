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

private:
    int dealerScore;
    int playerScore;
    bool playAgain = true;
    Hand playerHand;
    Hand dealerHand;
    Deck blackjackDeck;
};