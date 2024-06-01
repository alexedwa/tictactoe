#include "tictactoe.h"
#include "./ui_tictactoe.h"
#include <QMessageBox>

tictactoe::tictactoe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tictactoe)
{
    ui->setupUi(this);
}

tictactoe::~tictactoe()
{
    delete ui;
}

void tictactoe::checkWin(){
    if (turnCount % 2 == 1){        // changing to naughts
        ui->X_Turn->setStyleSheet("background-color: black;\ncolor: black;\nfont-size: 50px;");
        ui->O_Turn->setStyleSheet("background-color: blue;\ncolor: black;\nfont-size: 50px;");

    }
    else if (turnCount % 2 == 0){       //changing to crosses
        ui->O_Turn->setStyleSheet("background-color: black;\ncolor: black;\nfont-size: 50px;");
        ui->X_Turn->setStyleSheet("background-color: red;\ncolor: black;\nfont-size: 50px;");
    }

    if (turnCount == 9){
        QMessageBox::about(this, "Draw", "'tis a draw. No one wins...");
        return;
    }


    //diagonal win
    if ( (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]) ){
        if(board[1][1] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }




    //row win
    else if (board[0][0] == board[0][1] && board[0][1] == board[0][2]){
        if (board[0][0] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }

    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]){
        if (board[1][0] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }

    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]){
        if (board[2][0] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }




    //column win
    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]){
        if (board[0][0] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }

    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]){
        if (board[0][2] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }

    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]){
        if (board[0][2] == 0) QMessageBox::about(this, "Winner!", "Crosses have won!!!");
        else QMessageBox::about(this, "Winner!", "Noughts have won!!!");
    }
}

void tictactoe::on_a1_Button_clicked()
{
    if (board[2][0] == 0 || board[2][0] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->a1_Button->setText("O");
        board[2][0] = 1;
    }else{
        ui->a1_Button->setText("X");
        board[2][0] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_a2_Button_clicked()
{
    if (board[1][0] == 0 || board[1][0] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->a2_Button->setText("O");
        board[1][0] = 1;
    }else{
        ui->a2_Button->setText("X");
        board[1][0] = 0;
    }
    checkWin();
    turnCount++;
}


void tictactoe::on_a3_Button_clicked()
{
    if (board[0][0] == 0 || board[0][0] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->a3_Button->setText("O");
        board[0][0] = 1;
    }else{
        ui->a3_Button->setText("X");
        board[0][0] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_b1_Button_clicked()
{
    if (board[2][1] == 0 || board[2][1] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->b1_Button->setText("O");
        board[2][1] = 1;
    }else{
        ui->b1_Button->setText("X");
        board[2][1] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_b2_Button_clicked()
{
    if (board[1][1] == 0 || board[1][1] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->b2_Button->setText("O");
        board[1][1] = 1;
    }else{
        ui->b2_Button->setText("X");
        board[1][1] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_b3_Button_clicked()
{
    if (board[0][1] == 0 || board[0][1] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->b3_Button->setText("O");
        board[0][1] = 1;
    }else{
        ui->b3_Button->setText("X");
        board[0][1] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_c1_Button_clicked()
{
    if (board[2][2] == 0 || board[2][2] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->c1_Button->setText("O");
        board[2][2] = 1;
    }else{
        ui->c1_Button->setText("X");
        board[2][2] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_c2_Button_clicked()
{
    if (board[1][2] == 0 || board[1][2] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->c2_Button->setText("O");
        board[1][2] = 1;
    }else{
        ui->c2_Button->setText("X");
        board[1][2] = 0;
    }

    checkWin();
    turnCount++;
}


void tictactoe::on_c3_Button_clicked()
{
    if (board[0][2] == 0 || board[0][2] == 1){
        return;
    }

    if (turnCount % 2 == 0){
        ui->c3_Button->setText("O");
        board[0][2] = 1;
    }else{
        ui->c3_Button->setText("X");
        board[0][2] = 0;
    }

    checkWin();
    turnCount++;
}

