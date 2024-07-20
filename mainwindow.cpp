#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "systemanalyser.h"

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

void MainWindow::on_pbLogOut_clicked()
{
    auto anal = std::make_unique<SystemAnalyser>();
    anal->RunCommand("killall startplasma-x11");
}


void MainWindow::on_pbRestart_clicked()
{
    auto anal = std::make_unique<SystemAnalyser>();
    anal->RunCommand("reboot");
}


void MainWindow::on_pbShutdown_clicked()
{
    auto anal = std::make_unique<SystemAnalyser>();
    anal->RunCommand("shutdown now");
}

