#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm> // for shuffle
#include <random>    // for mt19937 (Mersenne Twister engine) 

class Deck
{
private:
    std::vector<Card> m_deck;  //this is the vector that will hold the deck
public:
    Deck();
    Deck(int numberOfDecks);
    ~Deck();
    void makeDeck();
    void shuffle();
    Card deal();
    void printDeck();
    int cardsLeft();
    void clearDeck(int numberOfDecks);

};
#endif // DECK_H
