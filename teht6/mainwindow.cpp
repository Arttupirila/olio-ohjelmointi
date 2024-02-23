#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    x++;
    QString s = QString::number(x);
    qDebug()<<"Button pushed";
    ui->lineEdit->setText(s);


}




void MainWindow::on_pushButton_2_clicked()
{
    qDebug()<<"Reset";
    ui->lineEdit->setText(nullptr);
    x = 0;
}

