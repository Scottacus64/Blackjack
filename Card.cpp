
#include "Card.h"
#include <iostream>

//using namespace std;

Card::Card()
{  
}

Card::Card(int fv, int av, char s, string pv)
{
    faceValue = fv;
    actualValue = av;
    suit = s;
    printValue = pv;
    faceUp = true;
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
    else{
        cout << "**";
    }
}

void Card::printAV()
{
    cout << actualValue;
}