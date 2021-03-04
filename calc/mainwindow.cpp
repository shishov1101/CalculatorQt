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
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_6_clicked()
{
    A.append("2");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_7_clicked()
{
    A.append("3");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_2_clicked()
{
    A.append("4");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_5_clicked()
{
    A.append("5");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_8_clicked()
{
    A.append("6");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_3_clicked()
{
    A.append("7");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_4_clicked()
{
    A.append("8");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_9_clicked()
{
    A.append("9");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_10_clicked()
{
    A.append("0");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_15_clicked()
{
    A.append(".");
    ui->textBrowser->setText(A);
}

void MainWindow::on_pushButton_13_clicked()
{
    double a = A.toDouble();
}
