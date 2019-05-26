#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->InitAllInfo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitAllInfo()
{
    this->ui->lineEditQuotationsAddress->setText("tcp://180.168.146.187:10010");
    this->ui->lineEditTradeAddress->setText("tcp://180.168.146.187:10000");
    this->ui->lineEditBrokerID->setText("9999");
    this->ui->lineEditAccounts->setText("013604");
}
