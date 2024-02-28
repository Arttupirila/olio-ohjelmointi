#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);



    ~MainWindow();
public slots:

    void timeout();
private slots:

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_timeControl1_clicked();

    void on_timeControl2_clicked();

    void on_switchToPlayer2_clicked();

    void on_switchToPlayer1_clicked();

private:
    Ui::MainWindow *ui;


    short player1Time;
    short player2Time;
    short gameTime;
    short currentPlayer;
    QTimer *pQTimer;

    void updateProgressionBar() {
        if (currentPlayer == 1) {

ui->progressBar->setValue(player1Time);
        }
        if (currentPlayer == 2) {

ui->progressBar_2->setValue(player2Time);
        }

    }
    void setGameInfoText(QString a,short b) {
        ui->label_GameState->setText(a);

        QFont font = ui->label_GameState->font();
        font.setPointSize(b);
        ui->label_GameState->setFont(font);
    }
};
#endif // MAINWINDOW_H
