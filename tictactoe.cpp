#include "tictactoe.h"
#include "./ui_tictactoe.h"

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
// -1 = not chosen, 1 = O, 0(zero) = x (CHANGE THIS TO AN ARRAY LATER!!!)
int board[3][3] = {
    {-1, -1, -1},       //a3, b3, c3
    {-1, -1, -1},       // a2, b2, c2
    {-1, -1, -1}        //a1, b1, c1
};

bool turn = false;      //false = x, true = o

void switchTurns(){
    turn = !turn;
}

void checkWin(){
    //diagonal win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]){

    }
}

void tictactoe::on_a1_Button_clicked()
{
    if (board[2][0] == -1){
        if (turn){
            board[2][0] = 1;
        }else{
            board[2][0] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_a2_Button_clicked()
{
    if (board[1][0] == -1){
        if (turn){
            board[1][0] = 1;
        }else{
            board[1][0] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_a3_Button_clicked()
{
    if (board[0][0] == -1){
        if (turn){
            board[0][0] = 1;
        }else{
            board[0][0] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_b1_Button_clicked()
{
    if (board[2][1] == -1){
        if (turn){
            board[2][1] = 1;
        }else{
            board[2][1] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_b2_Button_clicked()
{
    if (board[1][1] == -1){
        if (turn){
            board[1][1] = 1;
        }else{
            board[1][1] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_b3_Button_clicked()
{
    if (board[0][1] == -1){
        if (turn){
            board[0][1] = 1;
        }else{
            board[0][1] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_c1_Button_clicked()
{
    if (board[2][2] == -1){
        if (turn){
            board[2][2] = 1;
        }else{
            board[2][2] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_c2_Button_clicked()
{
    if (board[1][2] == -1){
        if (turn){
            board[1][2] = 1;
        }else{
            board[1][2] = 0;
        }
        checkWin();
        switchTurns();
    }
}


void tictactoe::on_c3_Button_clicked()
{
    if (board[0][2] == -1){
        if (turn){
            board[0][2] = 1;
        }else{
            board[0][2] = 0;
        }
        checkWin();
        switchTurns();
    }
}

