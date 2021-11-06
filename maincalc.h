#ifndef MAINCALC_H
#define MAINCALC_H

#include <QWidget>

namespace Ui {
    class MainCalc;
}

class MainCalc : public QWidget
{
    Q_OBJECT

public:
    explicit MainCalc(QWidget *parent = 0);
    ~MainCalc();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_Plus_clicked();

    void on_pushButton_Equal_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Minus_clicked();

    void on_pushButton_Multiply_clicked();

    void on_pushButton_Divide_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_BackSpace_clicked();

private:
    Ui::MainCalc *ui;
};

#endif // MAINCALC_H
