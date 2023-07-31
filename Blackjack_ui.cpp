#include "Blackjack_ui.h"
#include "Blackjack.h"
#include "ui_blackjack.h"

BlackJack_ui::BlackJack_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BlackJack)
{
    ui->setupUi(this);
}

BlackJack::~BlackJack()
{
    delete ui;
}
