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


void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
    operand = 0;
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
    operand = 1;
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler();
    operand = 2;
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
    operand = 3;
}

void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_clear_clicked()
{
    state = 1;
    clearAndEnterClickHandler();
    ui->num1->setText(nullptr);
    ui->num2->setText(nullptr);
    ui->result->setText(nullptr);
    number1 = nullptr;
    number2 = nullptr;


}

