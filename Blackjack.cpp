#include "Blackjack.h"
#include <iostream>
#include <string>


Blackjack::Blackjack()
{    
    blackjackDeck = Deck(2);
    blackjackDeck.printDeck();
    blackjackDeck.shuffle();
    playerHand = Hand();
    dealerHand = Hand();
    playerScore = 0;
    dealerScore = 0;
}


Blackjack::~Blackjack()
{
}


void Blackjack::playGame()
{
    string again = "";
   
    while (playAgain == true)
    {
        newGame();
        playerTurn();
        dealerTurn();

        cout << "\nDealer: ";
        dealerHand.printHand();
        cout << "total = " << dealerScore;

        int result = gameOutcome();
        cout << result;

        cout << "\nPlay again (Y/N)?\n";
        cin >> again;
        if (again == "N" || again == "n") 
        {
            playAgain = false;
        }
    }
}

void Blackjack::newGame()
{
    dealerScore = 0;
    playerScore = 0;
    dealerAces = 0;
    playerAces = 0;
    bust = false;
    hit = true;
    dealerHand.clearHand();
    playerHand.clearHand();

    int cards = blackjackDeck.cardsLeft();
    if (cards < 25)
    {
        blackjackDeck.clearDeck(2);
        cout << "NEW DECK\n" ;
    }
    blackjackDeck.shuffle();

    for (int i=0; i<2; i++)
    {
        Card c = blackjackDeck.deal();
        playerHand.addCard(c);
        if (c.getActualValue() == 11) {playerAces ++;} 
        Card c1 = blackjackDeck.deal();
        dealerHand.addCard(c1);
         if (c1.getActualValue() == 11) {dealerAces ++;}
    }
    cout << "\nPlayer hand: ";
    playerHand.printHand();
    cout << "\nDealer hand: ";
    Card* c = dealerHand.getCard(1);
    c->flipCard();
    dealerHand.printHand();
}

Hand* Blackjack::getPlayerHand()
{
    Hand * pPlayerHand = &playerHand;
    return pPlayerHand;
}

Hand* Blackjack::getDealerHand()
{
    Hand* pDealerHand = &dealerHand;
    return pDealerHand;
}

int Blackjack::addUpHand(Hand hand, int player)
{
    int handTotal = 0;
    hand.sortActualValue();
    int size = hand.handSize(hand);
    
    for (int i=0; i<size; i++)
    {
        Card* c = hand.getCard(i);
        handTotal += c->getActualValue();
    }
    if (handTotal > 21) //&& c->getActualValue() == 11)
    {
        if (player == 1)
        {
            cout << "PlayerAces = "  << playerAces << "\n";
            for (int i=0; i<playerAces; i++)
            {
                if (handTotal >21) {handTotal -=10;}     
            }
        }
        if (player == 0)
        {
            cout << "DealerAces = "  << dealerAces << "\n";
            for (int i=0; i<dealerAces; i++)
            {
                if (handTotal > 21) {handTotal -=10;}
            }
        }
    }
    return handTotal;
}

int Blackjack::gameOutcome()
{
    cout << "bust = " << bust << " dealer score = " << dealerScore << " player score = " << playerScore << "\n";
    if (bust == true || dealerScore < 22 && dealerScore > playerScore)
    {
        return 0;
    }
    if (bust == false && playerScore > dealerScore || dealerScore > 21)
    {
        return 1;
    }
    if (bust == false && playerScore == dealerScore)
    {
        return 2;
    }
}

void Blackjack::playerTurn()
{
    string hitAgain = "";
    while (bust == false && hit == true)
    {
        cout <<"\nDo you want another card (y/n)?";
        cin >> hitAgain;
        if (hitAgain == "n" || hitAgain == "N")
        {
            hit = false;
        }
        else
        {
            Card c = blackjackDeck.deal();
            if (c.getActualValue() == 11) {playerAces ++;}
            playerHand.addCard(c);
            
        }
        cout << "\nPlayer: ";
        playerScore = addUpHand(playerHand, 1);
        playerHand.printHand();
        cout << " Total = " << playerScore;
        if (playerScore > 21) {bust = true;}
    }
}


int Blackjack::playerHit()
{
    Card c = blackjackDeck.deal();
    if (c.getActualValue() == 11) {playerAces++;}
    playerHand.addCard(c);
    playerScore = addUpHand(playerHand, 1);
    if (playerScore > 21) {bust = true;}
    return playerScore;

}

int Blackjack::dealerTurn()
{
    playerScore = addUpHand(playerHand, 1);
    Card* c = dealerHand.getCard(1);
    c->flipCard();
    dealerScore = addUpHand(dealerHand, 0);
    while (dealerScore <17 && bust == false)
    {
        Card c = blackjackDeck.deal();
        if (c.getActualValue() == 11) {dealerAces ++;}
        dealerHand.addCard(c);
        dealerScore= addUpHand(dealerHand, 0);
    }
    return dealerScore;
}
