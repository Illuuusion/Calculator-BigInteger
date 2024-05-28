#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QKeyEvent>
#include "facade.h"

#define CLICK_DURATION 100


QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    virtual void keyPressEvent(QKeyEvent* event);

private slots:
    void on_Button0_clicked();

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_ButtonPlus_clicked();

    void on_ButtonMinus_clicked();

    void on_ButtonMulti_clicked();

    void on_ButtonDiv_clicked();

    void on_ButtonPoint_clicked();

    void on_ButtonDel_clicked();

    void on_ButtonClear_clicked();

    void on_ButtonLeft_clicked();

    void on_ButtonRight_clicked();

    void on_ButtonIs_clicked();

    void on_pushButton_4_clicked();

    void on_ButtonMPlus_clicked();

    void on_ButtonMC_clicked();

    void on_ButtonMR_clicked();

    void on_ButtonMMinus_clicked();

private:
    Ui::Calculator *ui;
    AppContext context;
    Facade facade;

};
#endif // CALCULATOR_H
