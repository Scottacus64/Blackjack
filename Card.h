#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card
{
public:
    Card();
    ~Card();
    Card(int fv, int av, char s, string pv);
    int getFaceValue();
    int getActualValue();
    string getPrintValue();
    char getSuit();
    void flipCard();
    void printCard();
    void printAV();

private:
    int actualValue;
    int faceValue;
    char suit;
    string printValue;
    bool faceUp;
};
#endif // CARD_H