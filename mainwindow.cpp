#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>
#include "httpmanager.h"
#include "bluelight.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      webManager(new HttpManager)
{
    ui->setupUi(this);
    ui->startTime->setTime(QTime::currentTime());
    connect(webManager, SIGNAL(CoffeeJsonReady(QJsonObject *)),
            this, SLOT(processCoffeeJson(QJsonObject *)));

    connect(webManager, SIGNAL(LightsJsonReady(QJsonObject *)),
            this, SLOT(processLightsJson(QJsonObject *)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lightButton_clicked()
{
    webManager->sendLightsRequest();
}

void MainWindow::on_coffeeButton_clicked()
{
    webManager->sendCoffeeRequest();
}

void MainWindow::on_blueButton_clicked()
{
    BlueLight blueLight;
    blueLight.setModal(true);
    blueLight.exec();
}


void MainWindow::processCoffeeJson(QJsonObject *json)
{
    qDebug() << "Coffee Json ready";
    qDebug() << json;
}

void MainWindow::on_endTime_userTimeChanged(const QTime &time)
{
   ui->endTime->setTime(time);
   timeSinceStart = ui->startTime->time().secsTo(QDateTime::currentDateTime().time());
   timeLine = ui->startTime->time().secsTo(ui->endTime->time());
   decTimeLeft = timeSinceStart/timeLine;
   percentTimeLeft = (decTimeLeft) * 100;
   ui->timeToEnd->setValue(percentTimeLeft);

   //DEBUGGING:
   std::cout << "END TIME CHANGED" << std::endl;
   qDebug() << "currentDateTime: " << QTime::currentTime().toString("hms");
   std::cout << "timeSinceStart: " << timeSinceStart << std::endl;
   std::cout << "timeLine: " << timeLine << std::endl;
   qDebug() << "decTimeLeft: " << qSetRealNumberPrecision(5) << decTimeLeft;
   std::cout << "percentTimeLeft: " << percentTimeLeft << std::endl;
}

void MainWindow::on_startTime_timeChanged(const QTime &time)
{
    ui->startTime->setTime(time);
    timeSinceStart = ui->startTime->time().msecsTo(QTime::currentTime());
    timeLine = ui->startTime->time().msecsTo(ui->endTime->time());
    decTimeLeft = timeSinceStart/timeLine;
    percentTimeLeft = (decTimeLeft) * 100;
    ui->timeToEnd->setValue(percentTimeLeft);

   //DEBUGGING:
   qDebug() << "START TIME CHANGED";
   qDebug() << "currentTime: " << QTime::currentTime().toString("hms");
   qDebug() << "timeSinceStart: " << timeSinceStart;
   qDebug() << "timeLine: " << timeLine;
   qDebug() << "decTimeLeft: " << qSetRealNumberPrecision(5) << decTimeLeft;
   qDebug() << "percentTimeLeft: " << percentTimeLeft;

}

void MainWindow::processLightsJson(QJsonObject *json)
{
    qDebug() << "Lights Json ready";
    qDebug() << json;
}
