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

private:
    Ui::tictactoe *ui;
};
#endif // TICTACTOE_H
