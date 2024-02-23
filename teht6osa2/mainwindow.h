#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qpushbutton.h"
#include "ui_mainwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_N1_clicked();

    void on_N2_clicked();

    void on_N3_clicked();

    void on_N4_clicked();

    void on_N5_clicked();

    void on_N6_clicked();

    void on_N7_clicked();

    void on_N8_clicked();

    void on_N9_clicked();

    void on_N0_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_enter_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state = 1;
    float result;
    short operand;

    void numberClickedHandler()  {
        QPushButton *button = qobject_cast<QPushButton*>(sender());
        QString buttonText = button->text();

        if (state == 1) {
            number1 += buttonText;
            ui->num1->setText(number1);
        } else if (state == 2) {
            number2 += buttonText;
            ui->num2->setText(number2);
        }
    }
    void clearAndEnterClickHandler() {


            float floatNumber1 = number1.toFloat();
            float floatNumber2 = number2.toFloat();

            if (operand==0) {
            result = floatNumber1+floatNumber2;
            ui->result->setText(QString::number(result));
            }
            if (operand==1) {
            result = floatNumber1-floatNumber2;
            ui->result->setText(QString::number(result));
            }
            if (operand==2) {
            result = floatNumber1*floatNumber2;
            ui->result->setText(QString::number(result));
            }
            if (operand==3) {
            result = floatNumber1/floatNumber2;
            ui->result->setText(QString::number(result));
            }





        }

    void addSubMulDivClickHandler() {

        state = 2;


     }




};
#endif // MAINWINDOW_H
