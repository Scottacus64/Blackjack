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
    string hitAgain = "";
    while (playAgain == true)
    {
        int dealerTotal = 0;
        int playerTotal = 0;
        for (int i=0; i<2; i++)
        {
            playerHand.addCard(blackjackDeck.deal());
            dealerHand.addCard(blackjackDeck.deal());
        }
        cout << "\nPlayer hand: ";
        playerHand.printHand();
        cout << "\nDealer hand: ";
        Card* c = dealerHand.getCard(1);
        c->flipCard();
        dealerHand.printHand();
        c->flipCard();

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
                playerHand.addCard(blackjackDeck.deal());
            }
            cout << "\nPlayer: ";
            playerTotal = addUpHand(playerHand);
            playerHand.printHand();
            cout << " Totsl = " << playerTotal;
            if (playerTotal > 21) {bust = true;}
        }

        dealerTotal = addUpHand(dealerHand);
        while (dealerTotal <17 && bust == false)
        {
            dealerHand.addCard(blackjackDeck.deal());
            dealerTotal = addUpHand(dealerHand);
        }

        
        cout << "\nDealer: ";
        dealerHand.printHand();
        cout << "total = " << dealerTotal;

        if (bust == true || dealerTotal < 22 && dealerTotal > playerTotal)
        {
            cout << "\nDealer wins\n";
        }
        if (bust == false && playerTotal > dealerTotal || dealerTotal > 21)
        {
            cout << "\nPlayer wins!\n";
        }
        if (bust == false && playerTotal == dealerTotal)
        {
            cout << "\nPush!\n";
        }

        cout << "\nPlay again (Y/N)?\n";
        cin >> again;
        if (again == "N" || again == "n") 
        {
            playAgain = false;
        }
        bust = false;
        hit = true;
        dealerHand.clearHand();
        playerHand.clearHand();
        int cards = blackjackDeck.cardsLeft();
        if (cards < 25)
        {
            blackjackDeck.clearDeck(2);
        }
    }
}


int Blackjack::addUpHand(Hand hand)
{
    int handTotal = 0;
    hand.sortActualValue();
    int size = hand.handSize(hand);
    
    for (int i=0; i<size; i++)
    {
        Card* c = hand.getCard(i);
        handTotal += c->getActualValue();
    
        if (handTotal > 21 && c->getActualValue() == 11)
        {
            handTotal -= 10;
        }
    }
    return handTotal;
}


