#ifndef BLACKJACK_UI_H
#define BLACKJACK_UI_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class BlackJack; }
QT_END_NAMESPACE

class BlackJack : public QWidget
{
    Q_OBJECT

public:
    BlackJack(QWidget *parent = nullptr);
    ~BlackJack();

private:
    Ui::BlackJack *ui;
};
#endif // BLACKJACK_UI_H
