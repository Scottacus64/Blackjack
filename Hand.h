#ifndef HAND_H
#define HAND_H

#include "Deck.h"

class Hand
{
private:
    std::vector<Card> m_hand;
public:
    Hand();
    ~Hand();
    void printHand();
    Card removeCard(int position);
    void addCard(Card card);
    Card* getCard(int position);
    int handSize(Hand hand);
    void sortHandValue();
    void sortActualValue();
    void sortHandSuit();
    void sortHandSuitAndValue();
    static bool compareByCardValue(Card& card1, Card& card2);
    static bool compareByCardActualValue(Card& card1, Card& card2);
    static bool compareBySuit(Card& card1, Card& card2);
    static bool compareBySuitAndCardValue(Card& card1, Card& card2);
    void clearHand();
};

#endif // HAND_H