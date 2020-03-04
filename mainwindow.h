#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lightButton_clicked();

    void on_coffeeButton_clicked();

    void on_blueButton_clicked();

private:
    Ui::MainWindow *ui;
    QTime duration;
};
#endif // MAINWINDOW_H
