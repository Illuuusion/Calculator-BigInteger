/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QLabel *Arithmetic;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *Answer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ButtonMPlus;
    QPushButton *ButtonMMinus;
    QPushButton *ButtonMR;
    QPushButton *ButtonMC;
    QPushButton *ButtonDel;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *ButtonDiv;
    QPushButton *ButtonClear;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *ButtonMulti;
    QPushButton *ButtonLeft;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *ButtonMinus;
    QPushButton *ButtonRight;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button0;
    QPushButton *ButtonPoint;
    QPushButton *ButtonIs;
    QPushButton *ButtonPlus;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(550, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(550, 526));
        centralwidget->setMaximumSize(QSize(1677, 16777215));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 526, 164));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Arithmetic = new QLabel(scrollAreaWidgetContents);
        Arithmetic->setObjectName(QString::fromUtf8("Arithmetic"));
        QFont font;
        font.setPointSize(18);
        Arithmetic->setFont(font);
        Arithmetic->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Arithmetic->setScaledContents(false);
        Arithmetic->setWordWrap(true);

        verticalLayout_5->addWidget(Arithmetic);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 526, 163));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        Answer = new QLabel(scrollAreaWidgetContents_2);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        sizePolicy.setHeightForWidth(Answer->sizePolicy().hasHeightForWidth());
        Answer->setSizePolicy(sizePolicy);
        Answer->setFont(font);
        Answer->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(94, 92, 100);"));

        verticalLayout_6->addWidget(Answer);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ButtonMPlus = new QPushButton(centralwidget);
        ButtonMPlus->setObjectName(QString::fromUtf8("ButtonMPlus"));
        ButtonMPlus->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 191, 188);"));

        horizontalLayout_6->addWidget(ButtonMPlus);

        ButtonMMinus = new QPushButton(centralwidget);
        ButtonMMinus->setObjectName(QString::fromUtf8("ButtonMMinus"));
        ButtonMMinus->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 191, 188);"));

        horizontalLayout_6->addWidget(ButtonMMinus);

        ButtonMR = new QPushButton(centralwidget);
        ButtonMR->setObjectName(QString::fromUtf8("ButtonMR"));
        ButtonMR->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 191, 188);"));

        horizontalLayout_6->addWidget(ButtonMR);

        ButtonMC = new QPushButton(centralwidget);
        ButtonMC->setObjectName(QString::fromUtf8("ButtonMC"));
        ButtonMC->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 191, 188);"));

        horizontalLayout_6->addWidget(ButtonMC);

        ButtonDel = new QPushButton(centralwidget);
        ButtonDel->setObjectName(QString::fromUtf8("ButtonDel"));
        ButtonDel->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 153, 150);"));

        horizontalLayout_6->addWidget(ButtonDel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout->addWidget(Button7);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout->addWidget(Button8);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setToolTipDuration(-7);
        Button9->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout->addWidget(Button9);

        ButtonDiv = new QPushButton(centralwidget);
        ButtonDiv->setObjectName(QString::fromUtf8("ButtonDiv"));
        ButtonDiv->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 70, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(ButtonDiv);

        ButtonClear = new QPushButton(centralwidget);
        ButtonClear->setObjectName(QString::fromUtf8("ButtonClear"));
        ButtonClear->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 153, 150);"));

        horizontalLayout->addWidget(ButtonClear);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_2->addWidget(Button4);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_2->addWidget(Button5);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setToolTipDuration(-7);
        Button6->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_2->addWidget(Button6);

        ButtonMulti = new QPushButton(centralwidget);
        ButtonMulti->setObjectName(QString::fromUtf8("ButtonMulti"));
        ButtonMulti->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 70, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(ButtonMulti);

        ButtonLeft = new QPushButton(centralwidget);
        ButtonLeft->setObjectName(QString::fromUtf8("ButtonLeft"));
        ButtonLeft->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));

        horizontalLayout_2->addWidget(ButtonLeft);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_3->addWidget(Button1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_3->addWidget(Button2);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setToolTipDuration(-7);
        Button3->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_3->addWidget(Button3);

        ButtonMinus = new QPushButton(centralwidget);
        ButtonMinus->setObjectName(QString::fromUtf8("ButtonMinus"));
        ButtonMinus->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 70, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(ButtonMinus);

        ButtonRight = new QPushButton(centralwidget);
        ButtonRight->setObjectName(QString::fromUtf8("ButtonRight"));
        ButtonRight->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));

        horizontalLayout_3->addWidget(ButtonRight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_4->addWidget(Button0);

        ButtonPoint = new QPushButton(centralwidget);
        ButtonPoint->setObjectName(QString::fromUtf8("ButtonPoint"));
        ButtonPoint->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);\n"
"color: rgb(222, 221, 218);"));

        horizontalLayout_4->addWidget(ButtonPoint);

        ButtonIs = new QPushButton(centralwidget);
        ButtonIs->setObjectName(QString::fromUtf8("ButtonIs"));
        ButtonIs->setToolTipDuration(-7);
        ButtonIs->setStyleSheet(QString::fromUtf8("color: rgb(222, 221, 218);"));

        horizontalLayout_4->addWidget(ButtonIs);

        ButtonPlus = new QPushButton(centralwidget);
        ButtonPlus->setObjectName(QString::fromUtf8("ButtonPlus"));
        ButtonPlus->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 70, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(ButtonPlus);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 70, 0);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Arithmetic->setText(QString());
        Answer->setText(QString());
        ButtonMPlus->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        ButtonMMinus->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        ButtonMR->setText(QCoreApplication::translate("Calculator", "MR", nullptr));
        ButtonMC->setText(QCoreApplication::translate("Calculator", "MC", nullptr));
        ButtonDel->setText(QCoreApplication::translate("Calculator", "Del", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        ButtonClear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        ButtonMulti->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        ButtonLeft->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        ButtonMinus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        ButtonRight->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ButtonPoint->setText(QCoreApplication::translate("Calculator", ",", nullptr));
        ButtonIs->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        ButtonPlus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "1/x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
