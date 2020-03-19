#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->startTime->setTime(QTime::currentTime());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lightButton_clicked()
{

}

void MainWindow::on_coffeeButton_clicked()
{

}

void MainWindow::on_blueButton_clicked()
{

}

void MainWindow::on_endTime_userTimeChanged(const QTime &time)
{
   ui->endTime->setTime(time);
   timeSinceStart = ui->startTime->time().secsTo(QDateTime::currentDateTime().time());
   timeLine = ui->startTime->time().secsTo(ui->endTime->time());
   percentTimeLeft = (timeSinceStart/timeLine) * 100;

   ui->timeToEnd->setValue(percentTimeLeft);

   //DEBUGGING:
   std::cout << "END TIME CHANGED" << std::endl;
   qDebug() << "currentDateTime: " << QTime::currentTime().toString("hms");
   std::cout << "timeSinceStart: " << timeSinceStart << std::endl;
   std::cout << "timeLine: " << timeLine << std::endl;
   std::cout << "percentTimeLeft: " << percentTimeLeft << std::endl;
}

void MainWindow::on_startTime_timeChanged(const QTime &time)
{
    ui->startTime->setTime(time);
    timeSinceStart = ui->startTime->time().msecsTo(QTime::currentTime());
    timeLine = ui->startTime->time().msecsTo(ui->endTime->time());
    percentTimeLeft = (timeSinceStart/timeLine) * 100;
    ui->timeToEnd->setValue(percentTimeLeft);

   //DEBUGGING:
   qDebug() << "START TIME CHANGED";
   qDebug() << "currentDateTime: " << QTime::currentTime().toString("hms");
   qDebug() << "timeSinceStart: " << timeSinceStart;
   qDebug() << "timeLine: " << timeLine;
   qDebug() << "percentTimeLeft: " << percentTimeLeft;

}
