#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "httpmanager.h"
#include "bluelight.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      webManager(new HttpManager)
{
    ui->setupUi(this);

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

void MainWindow::processLightsJson(QJsonObject *json)
{
    qDebug() << "Lights Json ready";
    qDebug() << json;
}

