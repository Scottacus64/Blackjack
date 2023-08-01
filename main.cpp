#include "BlackjackUI.h"
#include "Blackjack.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackjackUI w;
    w.show();
    return a.exec();
}
