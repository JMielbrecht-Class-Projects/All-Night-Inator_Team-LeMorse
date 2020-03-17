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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        motto = new QLabel(centralwidget);
        motto->setObjectName(QString::fromUtf8("motto"));
        motto->setGeometry(QRect(180, 20, 441, 111));
        QFont font;
        font.setPointSize(50);
        motto->setFont(font);
        motto->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        coffeeButton = new QPushButton(centralwidget);
        coffeeButton->setObjectName(QString::fromUtf8("coffeeButton"));
        coffeeButton->setGeometry(QRect(180, 230, 171, 81));
        coffeeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(180, 140, 171, 81));
        lightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        blueButton = new QPushButton(centralwidget);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));
        blueButton->setGeometry(QRect(180, 320, 171, 81));
        blueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        label_start = new QLabel(centralwidget);
        label_start->setObjectName(QString::fromUtf8("label_start"));
        label_start->setGeometry(QRect(513, 140, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        label_start->setFont(font1);
        label_start->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        labe_end = new QLabel(centralwidget);
        labe_end->setObjectName(QString::fromUtf8("labe_end"));
        labe_end->setGeometry(QRect(523, 220, 91, 31));
        labe_end->setFont(font1);
        labe_end->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        timeToEnd = new QProgressBar(centralwidget);
        timeToEnd->setObjectName(QString::fromUtf8("timeToEnd"));
        timeToEnd->setGeometry(QRect(493, 340, 121, 31));
        timeToEnd->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        timeToEnd->setValue(0);
        startTime = new QTimeEdit(centralwidget);
        startTime->setObjectName(QString::fromUtf8("startTime"));
        startTime->setGeometry(QRect(460, 180, 151, 31));
        startTime->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        endTime = new QTimeEdit(centralwidget);
        endTime->setObjectName(QString::fromUtf8("endTime"));
        endTime->setGeometry(QRect(460, 260, 151, 31));
        endTime->setStyleSheet(QString::fromUtf8("QTimeEdit {\n"
"	border-color: rgb(0, 0, 255);\n"
"  color: rgb(0, 0, 255);\n"
"  background-color: rgb(255, 255, 0);\n"
"  border-width: 3px;\n"
"  border-style: solid;\n"
"  border-radius:10px;\n"
"  margin:0px;\n"
"  padding:0px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        blueButton->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        label_start->setText(QApplication::translate("MainWindow", "Start Time", nullptr));
        labe_end->setText(QApplication::translate("MainWindow", "End Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
