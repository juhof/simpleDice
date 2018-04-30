#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include <functional>
#include <thread>
#include <chrono>
#include <unistd.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->closeButton, SIGNAL(clicked(bool)), this, SLOT(closeWindow()));
    dice_ = Dice();
}

//------------------------------------------------------------------------------
MainWindow::~MainWindow()
{
    delete ui;
}

//------------------------------------------------------------------------------
void MainWindow::closeWindow()
{
    QApplication::quit();
}

void waitMilliseconds()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

//------------------------------------------------------------------------------
void MainWindow::animateRolling()
{
    std::cout << "What the ...";
    ui->diceLabel->setText("rolling...");
    std::cout << "FUCK!?" << std::endl;

    std::thread wait = std::thread(waitMilliseconds);
    wait.join();

}

void MainWindow::setWaitingImage()
{
    std::cout << "Setting up the image" << std::endl;
    ui->diceLabel->setPixmap(QPixmap(":/images/waiting.png"));
    std::cout << "Set up the image" << std::endl;
}



//------------------------------------------------------------------------------
void MainWindow::on_rollDiceButton_clicked()
{
    int valueInt = dice_.rollDice();
    std::string valueString = std::to_string(valueInt);
    QString valueQstring = QString::fromStdString(valueString);

    if (valueQstring == "1")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice1.png"));
    }
    else if (valueQstring == "2")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice2.png"));
    }
    else if (valueQstring == "3")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice3.png"));
    }
    else if (valueQstring == "4")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice4.png"));
    }
    else if (valueQstring == "5")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice5.png"));
    }
    else if (valueQstring == "6")
    {
        ui->diceLabel->setPixmap(QPixmap(":/images/dice6.png"));
    }
    else
    {
        std::cout << "Something went wrong!" << std::endl;
    }
    std::cout << "You rolled: " << valueString << std::endl;
}
