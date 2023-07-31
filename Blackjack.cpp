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

        string result = gameOutcome();
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
    bust = false;
    hit = true;
    dealerHand.clearHand();
    playerHand.clearHand();

    int cards = blackjackDeck.cardsLeft();
    if (cards < 25)
    {
        blackjackDeck.clearDeck(2);
    }

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

string Blackjack::gameOutcome()
{
    if (bust == true || dealerScore < 22 && dealerScore > playerScore)
    {
        return "\n\nDealer wins\n";
    }
    if (bust == false && playerScore > dealerScore || dealerScore > 21)
    {
        return "\n\nPlayer wins!\n";
    }
    if (bust == false && playerScore == dealerScore)
    {
        return "\n\nPush!\n";
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
            playerHand.addCard(blackjackDeck.deal());
        }
        cout << "\nPlayer: ";
        playerScore = addUpHand(playerHand);
        playerHand.printHand();
        cout << " Totsl = " << playerScore;
        if (playerScore > 21) {bust = true;}
    }
}

void Blackjack::dealerTurn()
{
    dealerScore = addUpHand(dealerHand);
    while (dealerScore <17 && bust == false)
    {
        dealerHand.addCard(blackjackDeck.deal());
        dealerScore= addUpHand(dealerHand);
    }
}
