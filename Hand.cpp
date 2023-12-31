#include "Hand.h"
#include <iostream>

Hand::Hand()
{
}


Hand::~Hand()
{  
}


Card Hand::removeCard(int position)
{
    Card c = m_hand.at(position);
    m_hand.erase(m_hand.begin() + position);
    return c;
}


void Hand::addCard(Card card)
{
    m_hand.push_back(card);
}


Card* Hand::getCard(int position)
{
    Card* c = &m_hand.at(position);
    return c;
}


int Hand::handSize(Hand hand)
{
    int size =  m_hand.size();
    return size;
}


void Hand::printHand()
{
    for (auto& card : m_hand) 
    {
        card.printCard();
        std::cout << " ";

    }
}


void Hand::sortHandValue()
{
    std::sort(m_hand.begin(), m_hand.end(), compareByCardValue);
}


bool Hand::compareByCardValue(Card& card1, Card& card2) 
{
    return card1.getFaceValue() < card2.getFaceValue();
}


void Hand::sortActualValue()
{
    std::sort(m_hand.begin(), m_hand.end(), compareByCardActualValue);
}

bool Hand::compareByCardActualValue(Card& card1, Card& card2) 
{
    return card1.getActualValue() < card2.getActualValue();
}


void Hand::sortHandSuit()
{
    std::sort(m_hand.begin(), m_hand.end(), compareBySuit);
}


bool Hand::compareBySuit(Card& card1, Card& card2)
{
    return card1.getSuit() < card2.getSuit();
}


void Hand::sortHandSuitAndValue()
{
    std::sort(m_hand.begin(), m_hand.end(), compareBySuitAndCardValue);
}


bool Hand::compareBySuitAndCardValue(Card& card1, Card& card2)
{
    if (card1.getSuit() == card2.getSuit())
    {
        return card1.getFaceValue() < card2.getFaceValue();
    }
    return card1.getSuit() < card2.getSuit();
}

void Hand::clearHand()
{
    m_hand.clear();
}