#include "BlackjackUI.h"
#include "ui_blackjack.h"
#include <string>
#include <iostream>



BlackjackUI::BlackjackUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BlackjackUI)
{
    ui->setupUi(this);

    cardImage[0] = QPixmap ("/Users/scottmiller/VSC/cpp/Blackjack/Card PNGs/0B.png");

    char suits[4] = {'C', 'S', 'H', 'D'};
    int slot = 0;
    for (int s=0; s<4; s++)
    {
        for (int i=1; i<14; i++)
        {
            slot++;
            QString path = "/Users/scottmiller/VSC/cpp/Blackjack/Card PNGs/";
            path += QString::number(i) + suits[s]+ ".png";
            cardImage[slot] = QPixmap (path);
        }
    }

    pc[0] = ui->pc_0;
    pc[1] = ui->pc_1;
    pc[2] = ui->pc_2;
    pc[3] = ui->pc_3;
    pc[4] = ui->pc_4;
    pc[5] = ui->pc_5;
    pc[6] = ui->pc_6;
    pc[7] = ui->pc_7;
    dc[0] = ui->dc_0;
    dc[1] = ui->dc_1;
    dc[2] = ui->dc_2;
    dc[3] = ui->dc_3;
    dc[4] = ui->dc_4;
    dc[5] = ui->dc_5;
    dc[6] = ui->dc_6;
    dc[7] = ui->dc_7;

    clearHands();

    ui->hitButton->setText("New Game?");
    m_pBlackjack = new Blackjack();

}

BlackjackUI::~BlackjackUI()
{
    delete ui;
}

void BlackjackUI::playGame()
{
    clearHands();
    inGame = true;
    playerBust = false;
    dealerBust = false;
    ui->hitButton->setText("Hit");
    m_pBlackjack->newGame();
    Hand* pPlayerHand = m_pBlackjack->getPlayerHand();
    displayPlayerHand(pPlayerHand);
    Hand* pDealerHand = m_pBlackjack->getDealerHand();
    displayDealerHand(pDealerHand);
}


void BlackjackUI::clearHands()
{
    for (int i=0; i<8; i++)
    {
        pc[i]->setPixmap((QPixmap()));
        dc[i]->setPixmap((QPixmap()));
    }
}

void BlackjackUI::displayDealerHand(Hand* pDealerHand)
{
    Hand dealerHand = *pDealerHand;
    Card* c;
    for (int i=0; i<dealerHand.handSize(dealerHand); i++)
    {
        c = dealerHand.getCard(i);
        int id = c->getID();
        if (c->getFaceUp() == false) {id = 0;}
        dc[i]->setPixmap(cardImage[id]);
    }
}

void BlackjackUI::displayDealerLabel(int score)
{
    if (dealerBust == false)
    {
        ui->dealerLabel->setText("Dealer  Total = " + QString::number(score)); 
    }
    else
    {
        ui->dealerLabel->setText("Dealer  Total = " + QString::number(score) + " Bust!!"); 
    }
}


void BlackjackUI::displayPlayerHand(Hand* pPlayerHand)
{
    Hand playerHand = *pPlayerHand;
    Card* c;
    for (int i=0; i<playerHand.handSize(playerHand); i++)
    {
        c = playerHand.getCard(i);
        int id = c->getID();
        pc[i]->setPixmap(cardImage[id]);
    }
    int score = m_pBlackjack->addUpHand(playerHand, 1);
    playerScore = score;
    displayPlayerLabel(score);
}


void BlackjackUI::displayPlayerLabel(int score)
{
    if (playerBust == false)
    {
       ui->playerLabel->setText("Player   Total = " + QString::number(score)); 
    }
    else
    {
        ui->playerLabel->setText("Player  Total = " + QString::number(score) + " Bust!!"); 
    }
}


void BlackjackUI::on_hitButton_clicked()
{
    if (inGame == false)
    {
        ui->hitButton->setText("Hit");
        ui->stayButton->setText("Stay");
        ui->dealerLabel->setText("Dealer");
        playGame();
    }
    else
    {
        playerScore = m_pBlackjack->playerHit();
        if (playerScore > 21) 
        {
            playerBust = true;
            gameOver();
        }
        displayPlayerLabel(playerScore);
        Hand* pPlayerHand = m_pBlackjack->getPlayerHand();
        displayPlayerHand(pPlayerHand);

    }

}


void BlackjackUI::on_stayButton_clicked()
{
    if (playerBust == false)
    {
        dealerScore = m_pBlackjack->dealerTurn();
        if (dealerScore > 21) {dealerBust = true;}
        Hand* pDealerHand = m_pBlackjack->getDealerHand();
        displayDealerHand(pDealerHand);
        displayDealerLabel(dealerScore);
        gameOver();
    }
}

void BlackjackUI::gameOver()
{
    inGame = false;
    int result = m_pBlackjack->gameOutcome();
    if (result == 1)
    {
        ui->stayButton->setText("Player Wins!");
    }
    else if (result == 0)
    {
        ui->stayButton->setText("Dealer Wins");
    }
    else
    {
        ui->stayButton->setText("Push!");
    }
    ui->hitButton->setText("Play Again?");
}

