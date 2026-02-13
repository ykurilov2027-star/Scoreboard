#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updateUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUi()
{
    ui->labelScoreA->setText(QString::number(scoreA));
    ui->labelScoreB->setText(QString::number(scoreB));
}

void MainWindow::on_btnPlusA_clicked()
{
    scoreA++;
    updateUi();
}

void MainWindow::on_btnMinusA_clicked()
{
    scoreA--;
    updateUi();
}

void MainWindow::on_btnPlusB_clicked()
{
    scoreB++;
    updateUi();
}

void MainWindow::on_btnMinusB_clicked()
{
    scoreB--;
    updateUi();
}

void MainWindow::on_btnReset_clicked()
{
    scoreA = 0;
    scoreB = 0;
    updateUi();
}
