#include "onlinegame.h"
#include "ui_onlinegame.h"
#include "mainwindow.h"

#include <QTabBar>


onlineGame::onlineGame(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::onlineGame)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->setTabVisible(0 , false) ;
    ui->tabWidget->tabBar()->setTabVisible(1 , false) ;
    ui->tabWidget->tabBar()->setTabVisible(2 , false) ;
    ui->tabWidget->setCurrentIndex(0) ;
}

onlineGame::~onlineGame()
{
    delete ui;
}



void onlineGame::on_cRoomBtn_clicked()
{
    ui->tabWidget->setCurrentIndex(2) ;
}


void onlineGame::on_jRoomBtn_clicked()
{
    ui->tabWidget->setCurrentIndex(1) ;
}


void onlineGame::on_goBackBtn_1_clicked()
{
    ui->tabWidget->setCurrentIndex(0) ;
}


void onlineGame::on_goBackBtn_2_clicked()
{
    ui->tabWidget->setCurrentIndex(0) ;
}


void onlineGame::on_submitBtn_clicked()
{
}

