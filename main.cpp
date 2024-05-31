#include "tictactoe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tictactoe w;
    w.setWindowTitle("Tic Tac Toe");
    w.show();
    return a.exec();
}
