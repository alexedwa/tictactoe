#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class tictactoe;
}
QT_END_NAMESPACE

class tictactoe : public QMainWindow
{
    Q_OBJECT

public:
    tictactoe(QWidget *parent = nullptr);
    ~tictactoe();
    void checkWin();

private slots:
    void on_a1_Button_clicked();

    void on_a2_Button_clicked();

    void on_a3_Button_clicked();

    void on_b1_Button_clicked();

    void on_b2_Button_clicked();

    void on_b3_Button_clicked();

    void on_c1_Button_clicked();

    void on_c2_Button_clicked();

    void on_c3_Button_clicked();

    void on_actionRestart_game_triggered();

private:
    Ui::tictactoe *ui;
    int turnCount = 1;

    // -1 = not chosen, 1 = O, 0 = x
    int board[3][3] = {
        {2, 3, 4},       //a3, b3, c3
        {5, 6, 7},       //a2, b2, c2
        {8, 9, 10}       //a1, b1, c1
    };
};
#endif // TICTACTOE_H
