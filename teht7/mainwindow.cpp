#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();


}

MainWindow::~MainWindow()
{
    delete ui;
    pQTimer=nullptr;
}


void MainWindow::on_timeControl1_clicked()
{
    ui->label_GameState->setText("Ready to play");
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->progressBar->setRange(0,120);
    ui->progressBar_2->setRange(0,120);
    ui->progressBar->setValue(120);
    ui->progressBar_2->setValue(120);
}


void MainWindow::on_timeControl2_clicked()
{
    ui->label_GameState->setText("Ready to play");
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setRange(0,300);
    ui->progressBar_2->setRange(0,300);
    ui->progressBar->setValue(300);
    ui->progressBar_2->setValue(300);
}



void MainWindow::on_btnStart_clicked()
{
    currentPlayer = 1;

    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(1000);


    setGameInfoText("Game ongoing", 20);

QFont font("Onyx", 20);
ui->label_p1->setFont(font);




}

void MainWindow::timeout() {
updateProgressionBar();
if (currentPlayer == 1) {
    player1Time -= 1;
    if (player1Time < 0) {
        player1Time = 0;
    }
} else if (currentPlayer == 2) {
    player2Time -= 1;
    if (player2Time < 0) {
        player2Time = 0;
    }
}
    qDebug()<<"sekunti kulunut";

}
void MainWindow::on_btnStop_clicked()
{


    qDebug()<<"Game stopped";
    disconnect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    setGameInfoText("Select playtime and press start game!", 22);
}








void MainWindow::on_switchToPlayer2_clicked()
{
    currentPlayer = 2;
    qDebug()<<"Player 2's turn";
    QFont font1("Segoe UI", 12);
    QFont font2("Onyx", 20);
    ui->label_p1->setFont(font1);
    ui->label_p2->setFont(font2);
}



void MainWindow::on_switchToPlayer1_clicked()
{
    currentPlayer = 1;
    qDebug()<<"Player 1's turn";
    QFont font1("Segoe UI", 12);
    QFont font2("Onyx", 20);
    ui->label_p2->setFont(font1);
    ui->label_p1->setFont(font2);
}

