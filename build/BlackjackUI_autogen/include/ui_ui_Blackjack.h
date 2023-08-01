/********************************************************************************
** Form generated from reading UI file 'ui_Blackjack.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_BLACKJACK_H
#define UI_UI_BLACKJACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackjackUI
{
public:
    QLabel *playerLabel;
    QLabel *dealerLabel;
    QPushButton *hitButton;
    QPushButton *stayButton;
    QLabel *dc_3;
    QLabel *dc_4;
    QLabel *dc_5;
    QLabel *dc_1;
    QLabel *dc_7;
    QLabel *dc_6;
    QLabel *dc_0;
    QLabel *dc_2;
    QLabel *pc_1;
    QLabel *pc_4;
    QLabel *pc_5;
    QLabel *pc_6;
    QLabel *pc_7;
    QLabel *pc_0;
    QLabel *pc_3;
    QLabel *pc_2;

    void setupUi(QWidget *BlackjackUI)
    {
        if (BlackjackUI->objectName().isEmpty())
            BlackjackUI->setObjectName("BlackjackUI");
        BlackjackUI->resize(883, 805);
        playerLabel = new QLabel(BlackjackUI);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(290, 10, 231, 51));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        playerLabel->setFont(font);
        playerLabel->setAlignment(Qt::AlignCenter);
        dealerLabel = new QLabel(BlackjackUI);
        dealerLabel->setObjectName("dealerLabel");
        dealerLabel->setGeometry(QRect(300, 290, 231, 51));
        dealerLabel->setFont(font);
        dealerLabel->setAlignment(Qt::AlignCenter);
        hitButton = new QPushButton(BlackjackUI);
        hitButton->setObjectName("hitButton");
        hitButton->setGeometry(QRect(240, 550, 311, 71));
        QFont font1;
        font1.setPointSize(30);
        hitButton->setFont(font1);
        stayButton = new QPushButton(BlackjackUI);
        stayButton->setObjectName("stayButton");
        stayButton->setGeometry(QRect(240, 640, 311, 71));
        stayButton->setFont(font1);
        dc_3 = new QLabel(BlackjackUI);
        dc_3->setObjectName("dc_3");
        dc_3->setGeometry(QRect(333, 341, 100, 140));
        dc_3->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_3->setScaledContents(true);
        dc_4 = new QLabel(BlackjackUI);
        dc_4->setObjectName("dc_4");
        dc_4->setGeometry(QRect(440, 341, 100, 140));
        dc_4->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_4->setScaledContents(true);
        dc_5 = new QLabel(BlackjackUI);
        dc_5->setObjectName("dc_5");
        dc_5->setGeometry(QRect(547, 341, 100, 140));
        dc_5->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_5->setScaledContents(true);
        dc_1 = new QLabel(BlackjackUI);
        dc_1->setObjectName("dc_1");
        dc_1->setGeometry(QRect(119, 341, 100, 140));
        dc_1->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_1->setScaledContents(true);
        dc_7 = new QLabel(BlackjackUI);
        dc_7->setObjectName("dc_7");
        dc_7->setGeometry(QRect(761, 341, 100, 140));
        dc_7->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_7->setScaledContents(true);
        dc_6 = new QLabel(BlackjackUI);
        dc_6->setObjectName("dc_6");
        dc_6->setGeometry(QRect(654, 341, 100, 140));
        dc_6->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_6->setScaledContents(true);
        dc_0 = new QLabel(BlackjackUI);
        dc_0->setObjectName("dc_0");
        dc_0->setGeometry(QRect(11, 341, 100, 140));
        dc_0->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_0->setScaledContents(true);
        dc_2 = new QLabel(BlackjackUI);
        dc_2->setObjectName("dc_2");
        dc_2->setGeometry(QRect(226, 341, 100, 140));
        dc_2->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        dc_2->setScaledContents(true);
        pc_1 = new QLabel(BlackjackUI);
        pc_1->setObjectName("pc_1");
        pc_1->setGeometry(QRect(127, 91, 100, 140));
        pc_1->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_1->setScaledContents(true);
        pc_4 = new QLabel(BlackjackUI);
        pc_4->setObjectName("pc_4");
        pc_4->setGeometry(QRect(445, 91, 100, 140));
        pc_4->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_4->setScaledContents(true);
        pc_5 = new QLabel(BlackjackUI);
        pc_5->setObjectName("pc_5");
        pc_5->setGeometry(QRect(551, 91, 100, 140));
        pc_5->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_5->setScaledContents(true);
        pc_6 = new QLabel(BlackjackUI);
        pc_6->setObjectName("pc_6");
        pc_6->setGeometry(QRect(657, 91, 100, 140));
        pc_6->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_6->setScaledContents(true);
        pc_7 = new QLabel(BlackjackUI);
        pc_7->setObjectName("pc_7");
        pc_7->setGeometry(QRect(763, 91, 100, 140));
        pc_7->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_7->setScaledContents(true);
        pc_0 = new QLabel(BlackjackUI);
        pc_0->setObjectName("pc_0");
        pc_0->setGeometry(QRect(21, 91, 100, 140));
        pc_0->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_0->setScaledContents(true);
        pc_3 = new QLabel(BlackjackUI);
        pc_3->setObjectName("pc_3");
        pc_3->setGeometry(QRect(339, 91, 100, 140));
        pc_3->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_3->setScaledContents(true);
        pc_2 = new QLabel(BlackjackUI);
        pc_2->setObjectName("pc_2");
        pc_2->setGeometry(QRect(233, 91, 100, 140));
        pc_2->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/13S.png")));
        pc_2->setScaledContents(true);

        retranslateUi(BlackjackUI);

        QMetaObject::connectSlotsByName(BlackjackUI);
    } // setupUi

    void retranslateUi(QWidget *BlackjackUI)
    {
        BlackjackUI->setWindowTitle(QCoreApplication::translate("BlackjackUI", "BlackjackUI", nullptr));
        playerLabel->setText(QCoreApplication::translate("BlackjackUI", "Player", nullptr));
        dealerLabel->setText(QCoreApplication::translate("BlackjackUI", "Dealer", nullptr));
        hitButton->setText(QCoreApplication::translate("BlackjackUI", "Hit", nullptr));
        stayButton->setText(QCoreApplication::translate("BlackjackUI", "Stay", nullptr));
        dc_3->setText(QString());
        dc_4->setText(QString());
        dc_5->setText(QString());
        dc_1->setText(QString());
        dc_7->setText(QString());
        dc_6->setText(QString());
        dc_0->setText(QString());
        dc_2->setText(QString());
        pc_1->setText(QString());
        pc_4->setText(QString());
        pc_5->setText(QString());
        pc_6->setText(QString());
        pc_7->setText(QString());
        pc_0->setText(QString());
        pc_3->setText(QString());
        pc_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BlackjackUI: public Ui_BlackjackUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_BLACKJACK_H
