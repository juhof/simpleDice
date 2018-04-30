#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "dice.h"
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_rollDiceButton_clicked();
    void closeWindow();
    void animateRolling();
    void setWaitingImage();

private:
    Ui::MainWindow *ui;
    Dice dice_;
};

#endif // MAINWINDOW_H
