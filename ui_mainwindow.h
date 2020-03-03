/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
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
    QLabel *label;
    QLabel *label_2;
    QProgressBar *timeToEnd;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;
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
        motto->setGeometry(QRect(220, 10, 431, 111));
        QFont font;
        font.setPointSize(50);
        motto->setFont(font);
        coffeeButton = new QPushButton(centralwidget);
        coffeeButton->setObjectName(QString::fromUtf8("coffeeButton"));
        coffeeButton->setGeometry(QRect(90, 210, 111, 41));
        lightButton = new QPushButton(centralwidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setGeometry(QRect(90, 140, 111, 41));
        blueButton = new QPushButton(centralwidget);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));
        blueButton->setGeometry(QRect(90, 270, 111, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(620, 170, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(620, 290, 101, 21));
        label_2->setFont(font1);
        timeToEnd = new QProgressBar(centralwidget);
        timeToEnd->setObjectName(QString::fromUtf8("timeToEnd"));
        timeToEnd->setGeometry(QRect(380, 420, 118, 23));
        timeToEnd->setValue(0);
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(620, 210, 118, 22));
        timeEdit_2 = new QTimeEdit(centralwidget);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(620, 330, 118, 22));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        motto->setText(QCoreApplication::translate("MainWindow", "STAY AWAKE", nullptr));
        coffeeButton->setText(QCoreApplication::translate("MainWindow", "COFFEE", nullptr));
        lightButton->setText(QCoreApplication::translate("MainWindow", "LIGHTS", nullptr));
        blueButton->setText(QCoreApplication::translate("MainWindow", "BLUE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start Time", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "End Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
