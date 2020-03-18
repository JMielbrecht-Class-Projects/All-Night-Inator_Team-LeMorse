/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *motto;
    QPushButton *coffeeButton;
    QPushButton *lightButton;
    QPushButton *blueButton;
    QLabel *label_start;
    QLabel *labe_end;
    QProgressBar *timeToEnd;
    QTimeEdit *startTime;
    QTimeEdit *endTime;
    QLabel *title;
    QLabel *dare;
    QLabel *prompt;
    QLabel *label_start_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1046, 849);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        motto = new QLabel(centralwidget);
        motto->setObjectName(QString::fromUtf8("motto"));
        motto->setGeometry(QRect(330, 170, 391, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font.setPointSize(40);
        motto->setFont(font);
        motto->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 0, 0)\n"
"}"));
        coffeeButton = new QPushButton(centralwidget);
        coffeeButton->setObjectName(QString::fromUtf8("coffeeButton"));
        coffeeButton->setGeometry(QRect(410, 620, 161, 161));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        coffeeButton->setFont(font1);
        coffeeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"	image: url(:/Images/CoffeePot.jpg);\n"
" 	color: rgb(255, 0, 0);\n"
"}"));
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(250, 620, 141, 161));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        lightButton->setFont(font2);
        lightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"	image: url(:/Images/Light.jpg);\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        blueButton = new QPushButton(centralwidget);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));
        blueButton->setGeometry(QRect(590, 620, 151, 161));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        blueButton->setFont(font3);
        blueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	\n"
"	background-color: rgb(0, 0, 0);\n"
"	image: url(:/Images/BlueLight.jpg);\n"
"  	color: rgb(255, 0, 0);\n"
"}"));
        label_start = new QLabel(centralwidget);
        label_start->setObjectName(QString::fromUtf8("label_start"));
        label_start->setGeometry(QRect(290, 300, 171, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font4.setPointSize(20);
        label_start->setFont(font4);
        label_start->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        labe_end = new QLabel(centralwidget);
        labe_end->setObjectName(QString::fromUtf8("labe_end"));
        labe_end->setGeometry(QRect(570, 300, 151, 41));
        labe_end->setFont(font4);
        labe_end->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        timeToEnd = new QProgressBar(centralwidget);
        timeToEnd->setObjectName(QString::fromUtf8("timeToEnd"));
        timeToEnd->setGeometry(QRect(430, 480, 141, 31));
        timeToEnd->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	alternate-background-color: rgb(255, 0, 0);\n"
"	color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-color: rgb(255, 255, 255);\n"
"}"));
        timeToEnd->setValue(0);
        startTime = new QTimeEdit(centralwidget);
        startTime->setObjectName(QString::fromUtf8("startTime"));
        startTime->setGeometry(QRect(290, 360, 151, 31));
        startTime->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"	color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        endTime = new QTimeEdit(centralwidget);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setGeometry(QRect(570, 360, 151, 31));
        endTime->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"	color: rgb(255, 0, 0);\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(110, 10, 811, 141));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font5.setPointSize(60);
        title->setFont(font5);
        title->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        dare = new QLabel(centralwidget);
        dare->setObjectName(QString::fromUtf8("dare"));
        dare->setGeometry(QRect(400, 240, 231, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Viner Hand ITC"));
        font6.setPointSize(24);
        dare->setFont(font6);
        dare->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 0, 0)\n"
"}"));
        prompt = new QLabel(centralwidget);
        prompt->setObjectName(QString::fromUtf8("prompt"));
        prompt->setGeometry(QRect(250, 570, 221, 33));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Viner Hand ITC"));
        prompt->setFont(font7);
        prompt->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_start_2 = new QLabel(centralwidget);
        label_start_2->setObjectName(QString::fromUtf8("label_start_2"));
        label_start_2->setGeometry(QRect(430, 410, 141, 41));
        label_start_2->setFont(font4);
        label_start_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1046, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        motto->setText(QApplication::translate("MainWindow", "STAY AWAKE", nullptr));
        coffeeButton->setText(QApplication::translate("MainWindow", "COFFEE", nullptr));
        lightButton->setText(QApplication::translate("MainWindow", "LIGHTS", nullptr));
        blueButton->setText(QApplication::translate("MainWindow", "BLUE \n"
"LIGHT", nullptr));
        label_start->setText(QApplication::translate("MainWindow", "START TIME", nullptr));
        labe_end->setText(QApplication::translate("MainWindow", "END TIME", nullptr));
        title->setText(QApplication::translate("MainWindow", "ALL-NIGHT-INATOR", nullptr));
        dare->setText(QApplication::translate("MainWindow", "(IF YOU DARE)", nullptr));
        prompt->setText(QApplication::translate("MainWindow", "I NEED SOME...", nullptr));
        label_start_2->setText(QApplication::translate("MainWindow", "PROGRESS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
