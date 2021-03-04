#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    A.append("1");
    B.append("1");
}

void MainWindow::on_pushButton_6_clicked()
{
    A.append("2");
    B.append("2");
}

void MainWindow::on_pushButton_7_clicked()
{
    A.append("3");
    B.append("3");
}

void MainWindow::on_pushButton_2_clicked()
{
    A.append("4");
    B.append("4");
}

void MainWindow::on_pushButton_5_clicked()
{
    A.append("5");
    B.append("5");
}

void MainWindow::on_pushButton_8_clicked()
{
    A.append("6");
    B.append("6");
}

void MainWindow::on_pushButton_3_clicked()
{
    A.append("7");
    B.append("7");
}
