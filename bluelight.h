#ifndef BLUELIGHT_H
#define BLUELIGHT_H

#include <QDialog>

namespace Ui {
class BlueLight;
}

class BlueLight : public QDialog
{
    Q_OBJECT

public:
    explicit BlueLight(QWidget *parent = nullptr);
    ~BlueLight();

private:
    Ui::BlueLight *ui;
};

#endif // BLUELIGHT_H
