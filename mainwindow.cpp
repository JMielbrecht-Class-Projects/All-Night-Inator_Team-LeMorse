#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
