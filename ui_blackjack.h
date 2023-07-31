/********************************************************************************
** Form generated from reading UI file 'blackjack.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKJACK_H
#define UI_BLACKJACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackJack
{
public:
    QPushButton *hitButton;
    QPushButton *stayButton;
    QLabel *playerLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dc_0;
    QLabel *dc_1;
    QLabel *dc_2;
    QLabel *dc_3;
    QLabel *dc_4;
    QLabel *dc_5;
    QLabel *dc_6;
    QLabel *dealerLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *pc_0;
    QLabel *pc_1;
    QLabel *pc_2;
    QLabel *pc_3;
    QLabel *pc_4;
    QLabel *pc_5;
    QLabel *pc_6;

    void setupUi(QWidget *BlackJack)
    {
        if (BlackJack->objectName().isEmpty())
            BlackJack->setObjectName("BlackJack");
        BlackJack->resize(802, 655);
        hitButton = new QPushButton(BlackJack);
        hitButton->setObjectName("hitButton");
        hitButton->setGeometry(QRect(300, 460, 171, 61));
        QFont font;
        font.setPointSize(31);
        font.setBold(true);
        hitButton->setFont(font);
        stayButton = new QPushButton(BlackJack);
        stayButton->setObjectName("stayButton");
        stayButton->setGeometry(QRect(300, 530, 171, 61));
        stayButton->setFont(font);
        playerLabel = new QLabel(BlackJack);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(270, 10, 201, 41));
        playerLabel->setFont(font);
        playerLabel->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(BlackJack);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 300, 751, 141));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        dc_0 = new QLabel(layoutWidget);
        dc_0->setObjectName("dc_0");
        dc_0->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_0->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_0);

        dc_1 = new QLabel(layoutWidget);
        dc_1->setObjectName("dc_1");
        dc_1->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_1->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_1);

        dc_2 = new QLabel(layoutWidget);
        dc_2->setObjectName("dc_2");
        dc_2->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_2->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_2);

        dc_3 = new QLabel(layoutWidget);
        dc_3->setObjectName("dc_3");
        dc_3->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_3->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_3);

        dc_4 = new QLabel(layoutWidget);
        dc_4->setObjectName("dc_4");
        dc_4->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_4->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_4);

        dc_5 = new QLabel(layoutWidget);
        dc_5->setObjectName("dc_5");
        dc_5->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_5->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_5);

        dc_6 = new QLabel(layoutWidget);
        dc_6->setObjectName("dc_6");
        dc_6->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        dc_6->setScaledContents(true);

        horizontalLayout_3->addWidget(dc_6);

        dealerLabel = new QLabel(BlackJack);
        dealerLabel->setObjectName("dealerLabel");
        dealerLabel->setGeometry(QRect(280, 240, 201, 41));
        dealerLabel->setFont(font);
        dealerLabel->setAlignment(Qt::AlignCenter);
        widget = new QWidget(BlackJack);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 70, 751, 141));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pc_0 = new QLabel(widget);
        pc_0->setObjectName("pc_0");
        pc_0->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_0->setScaledContents(true);

        horizontalLayout->addWidget(pc_0);

        pc_1 = new QLabel(widget);
        pc_1->setObjectName("pc_1");
        pc_1->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_1->setScaledContents(true);

        horizontalLayout->addWidget(pc_1);

        pc_2 = new QLabel(widget);
        pc_2->setObjectName("pc_2");
        pc_2->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_2->setScaledContents(true);

        horizontalLayout->addWidget(pc_2);

        pc_3 = new QLabel(widget);
        pc_3->setObjectName("pc_3");
        pc_3->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_3->setScaledContents(true);

        horizontalLayout->addWidget(pc_3);

        pc_4 = new QLabel(widget);
        pc_4->setObjectName("pc_4");
        pc_4->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_4->setScaledContents(true);

        horizontalLayout->addWidget(pc_4);

        pc_5 = new QLabel(widget);
        pc_5->setObjectName("pc_5");
        pc_5->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_5->setScaledContents(true);

        horizontalLayout->addWidget(pc_5);

        pc_6 = new QLabel(widget);
        pc_6->setObjectName("pc_6");
        pc_6->setPixmap(QPixmap(QString::fromUtf8("../../VSC/CPP/Blackjack/Card PNGs/1S.png")));
        pc_6->setScaledContents(true);

        horizontalLayout->addWidget(pc_6);


        retranslateUi(BlackJack);

        QMetaObject::connectSlotsByName(BlackJack);
    } // setupUi

    void retranslateUi(QWidget *BlackJack)
    {
        BlackJack->setWindowTitle(QCoreApplication::translate("BlackJack", "BlackJack", nullptr));
        hitButton->setText(QCoreApplication::translate("BlackJack", "Hit", nullptr));
        stayButton->setText(QCoreApplication::translate("BlackJack", "Stay", nullptr));
        playerLabel->setText(QCoreApplication::translate("BlackJack", "Player", nullptr));
        dc_0->setText(QString());
        dc_1->setText(QString());
        dc_2->setText(QString());
        dc_3->setText(QString());
        dc_4->setText(QString());
        dc_5->setText(QString());
        dc_6->setText(QString());
        dealerLabel->setText(QCoreApplication::translate("BlackJack", "Dealer", nullptr));
        pc_0->setText(QString());
        pc_1->setText(QString());
        pc_2->setText(QString());
        pc_3->setText(QString());
        pc_4->setText(QString());
        pc_5->setText(QString());
        pc_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BlackJack: public Ui_BlackJack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKJACK_H
