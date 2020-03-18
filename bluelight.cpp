#include "bluelight.h"
#include "ui_bluelight.h"

BlueLight::BlueLight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BlueLight)
{
    ui->setupUi(this);
}

BlueLight::~BlueLight()
{
    delete ui;
}
