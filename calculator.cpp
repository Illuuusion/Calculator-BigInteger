#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_Button0_clicked()
{
    if (facade.addNumber(&context, "0"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button1_clicked()
{
    if (facade.addNumber(&context, "1"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button2_clicked()
{
    if (facade.addNumber(&context, "2"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}


void Calculator::on_Button3_clicked()
{
    if (facade.addNumber(&context, "3"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button4_clicked()
{
    if (facade.addNumber(&context, "4"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button5_clicked()
{
    if (facade.addNumber(&context, "5"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button6_clicked()
{
    if (facade.addNumber(&context, "6"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button7_clicked()
{
    if (facade.addNumber(&context, "7"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button8_clicked()
{
    if (facade.addNumber(&context, "8"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_Button9_clicked()
{
    if (facade.addNumber(&context, "9"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonPlus_clicked()
{
    if (facade.addSign(&context, "+"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonMinus_clicked()
{
    if (facade.addSign(&context, "-"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonMulti_clicked()
{
    if (facade.addSign(&context, "*"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonDiv_clicked()
{
    if (facade.addSign(&context, "/"))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonPoint_clicked()
{
    if (facade.addPoint(&context))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonDel_clicked()
{
    if (facade.deleteSymbol(&context))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}


void Calculator::on_ButtonClear_clicked()
{
    facade.clear(&context);
    ui->Arithmetic->clear();
    ui->Answer->clear();
}

void Calculator::on_ButtonLeft_clicked()
{
    if (facade.addLeft(&context))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonRight_clicked()
{
    if (facade.addRight(&context))
        ui->Arithmetic->setText(QString::fromStdString(context.current));
}

void Calculator::on_ButtonIs_clicked()
{
    ui->Answer->clear();
    if (context.current == "")
        ui->Answer->setText("0");
    else{
        try {
        facade.calculate(&context);
        ui->Answer->setText(QString::fromStdString(context.answer));
        context.save = context.answer;
        } catch(std::exception) {
             ui->Answer->setText("Error");
        }
    }
}

void Calculator::on_pushButton_4_clicked()
{
    context.current = "1/(" + context.current + ")";
    facade.calculate(&context);
    ui->Answer->setText(QString::fromStdString(context.answer));
    ui->Arithmetic->setText(QString::fromStdString(context.current));
}


void Calculator::on_ButtonMPlus_clicked()
{
    if (context.save == ""){
        facade.calculate(&context);
        context.save = context.answer;
    }
    else{
        facade.calculate(&context);
        std::string curr = context.current;
        context.current = context.save + "+" + context.answer;
        facade.calculate(&context);
        context.save = context.answer;
        context.current = curr;
    }
}

void Calculator::on_ButtonMC_clicked()
{
    context.save = "";
}

void Calculator::on_ButtonMR_clicked()
{
    std::string curr = context.current;
    ui->Answer->clear();
    context.current = context.save;
    facade.calculate(&context);
    ui->Answer->setText(QString::fromStdString(context.answer));
    context.current = curr;
}

void Calculator::on_ButtonMMinus_clicked()
{
    if (context.save == ""){
        facade.calculate(&context);
        context.save = "-" + context.answer;
    }
    else{
        facade.calculate(&context);
        std::string curr = context.current;
        context.current = context.save + "-" + context.answer;
        facade.calculate(&context);
        context.save = context.answer;
        context.current = curr;
    }
}

void Calculator::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()){
    case Qt::Key_0:
        ui->Button0->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_1:
        ui->Button1->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_2:
        ui->Button2->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_3:
        ui->Button3->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_4:
        ui->Button4->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_5:
        ui->Button5->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_6:
        ui->Button6->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_7:
        ui->Button7->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_8:
        ui->Button8->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_9:
        ui->Button9->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_C:
        ui->ButtonClear->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Delete:
        ui->ButtonDel->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Plus:
        ui->ButtonPlus->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Minus:
        ui->ButtonMinus->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Slash:
        ui->ButtonDiv->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Asterisk:
        ui->ButtonMulti->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Comma:
        ui->ButtonPoint->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Backspace:
        ui->ButtonDel->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Period:
        ui->ButtonPoint->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Equal:
        ui->ButtonIs->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_ParenLeft:
        ui->ButtonLeft->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_ParenRight:
        ui->ButtonRight->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Enter:
        ui->ButtonIs->animateClick(CLICK_DURATION);
        break;
    case Qt::Key_Return:
        ui->ButtonIs->animateClick(CLICK_DURATION);
        break;
    }
}
