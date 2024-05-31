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
// -1 = not chosen, 1 = O, 0 = x
int board[3][3] = {
    {-1, -1, -1},       //a3, b3, c3
    {-1, -1, -1},       //a2, b2, c2
    {-1, -1, -1}        //a1, b1, c1
};

int turnCount = 1;

int checkWin(){
    //diagonal win
    if ( (board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]) ){
        if (board[1][1] != -1) return turnCount % 2;     // x = 1, o = 0 (very confusing i know)
    }

    //row win
    else if ( (board[0][0] == board[0][1] && board[0][1] == board[0][2]) || (board[1][0] == board[1][1] && board[1][1] == board[1][2]) || (board[2][0] == board[2][1] && board[2][1] == board[2][2]) ){
        if (board[0][0] != -1) return turnCount % 2;
        else if (board[1][0] != -1) return turnCount % 2;
        else if (board[2][0] != -1) return turnCount % 2;
    }

    //column win
    else if ( (board[0][0] == board[1][0] && board[1][0] == board[2][0]) || (board[0][1] == board[1][1] && board[1][1] == board[2][1]) || (board[0][2] == board[1][2] && board[1][2] == board[2][2]) ){
        if (board[0][0] != -1) return turnCount % 2;
        else if (board[0][1] != -1) return turnCount % 2;
        else if (board[0][2] != -1) return turnCount % 2;     }

    else return -1;
}

void tictactoe::on_a1_Button_clicked()
{
    if (board[2][0] == -1){
        if (turnCount % 2 == 0){
            board[2][0] = 1;
        }else{
            board[2][0] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_a2_Button_clicked()
{
    if (board[1][0] == -1){
        if (turnCount % 2 == 0){
            board[1][0] = 1;
        }else{
            board[1][0] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_a3_Button_clicked()
{
    if (board[0][0] == -1){
        if (turnCount % 2 == 0){
            board[0][0] = 1;
        }else{
            board[0][0] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_b1_Button_clicked()
{
    if (board[2][1] == -1){
        if (turnCount % 2 == 0){
            board[2][1] = 1;
        }else{
            board[2][1] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_b2_Button_clicked()
{
    if (board[1][1] == -1){
        if (turnCount % 2 == 0){
            board[1][1] = 1;
        }else{
            board[1][1] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_b3_Button_clicked()
{
    if (board[0][1] == -1){
        if (turnCount % 2 == 0){
            board[0][1] = 1;
        }else{
            board[0][1] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_c1_Button_clicked()
{
    if (board[2][2] == -1){
        if (turnCount % 2 == 0){
            board[2][2] = 1;
        }else{
            board[2][2] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_c2_Button_clicked()
{
    if (board[1][2] == -1){
        if (turnCount % 2 == 0){
            board[1][2] = 1;
        }else{
            board[1][2] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}


void tictactoe::on_c3_Button_clicked()
{
    if (board[0][2] == -1){
        if (turnCount % 2 == 0){
            board[0][2] = 1;
        }else{
            board[0][2] = 0;
        }

        if (checkWin() == 0){
            QMessageBox::about(this, "Winner!", "Naughts is the winner!");
        }
        else if (checkWin() == 1){
            QMessageBox::about(this, "Winner!", "Crosses is the winner!");
        }
        turnCount++;
    }
}

