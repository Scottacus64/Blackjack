#ifndef BLACKJACKUI_H
#define BLACKJACKUI_H

#include <QWidget>
#include <QLabel>
#include "Blackjack.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BlackjackUI; }
QT_END_NAMESPACE

class BlackjackUI : public QWidget
{
    Q_OBJECT

public:
    BlackjackUI(QWidget *parent = nullptr);
    ~BlackjackUI();
    void playGame();
    void displayPlayerHand(Hand* pPlayerHand);
    void displayDealerHand(Hand* pDealerHand);
    void displayPlayerLabel(int score);
    void displayDealerLabel(int score);
    void gameOver();
    void clearHands();
    

private slots:
    void on_hitButton_clicked();

    void on_stayButton_clicked();

private:
    Ui::BlackjackUI *ui;

    QPixmap cardImage[53];

    QLabel* pc[8];
    QLabel* dc[8];

    int slot = 0;
    bool inGame = false;
    bool playerBust = false;
    bool dealerBust = false;
    int playerScore;
    int dealerScore;
    int win;
    int loss;
    int push;
    
    Blackjack* m_pBlackjack ;
};
#endif // BLACKJACKUI_H
