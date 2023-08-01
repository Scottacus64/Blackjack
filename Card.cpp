
#include "Card.h"
#include <iostream>

//using namespace std;

Card::Card()
{  
}

Card::Card(int fv, int av, int idn, char s, string pv)
{
    faceValue = fv;
    actualValue = av;
    suit = s;
    printValue = pv;
    faceUp = true;
    id = idn;
}

Card::~Card()
{
}

void Card::flipCard()
{
    faceUp = !faceUp;
}

int Card::getFaceValue()
{
    return faceValue;
}

int Card::getActualValue()
{
    return actualValue;
}

string Card::getPrintValue()
{
    return printValue;
}

bool Card::getFaceUp()
{
    return faceUp;
}

int Card::getID()
{
    return id;
}

char Card::getSuit()
{
    return suit;
}

void Card::printCard()
{
    if (faceUp == true)
    {
        cout << printValue << suit;
    }
    else
    {
        cout << "**";
    }
}

void Card::printAV()
{
    cout << actualValue;
}