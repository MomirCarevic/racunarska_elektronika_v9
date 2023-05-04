#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_LED1_clicked()
{
    digitalWrite(25,HIGH);
}

void Dialog::on_LED1_released()
{
    digitalWrite(25,LOW);
}

void Dialog::on_LED2_clicked()
{
    digitalWrite(26,HIGH);

}

void Dialog::on_LED2_released()
{
    digitalWrite(26,HIGH);

}

void Dialog::on_LED3_clicked()
{
    digitalWrite(27,HIGH);

}

void Dialog::on_LED3_released()
{
    digitalWrite(27,HIGH);

}

void Dialog::on_LED4_clicked()
{
    digitalWrite(28,HIGH);

}

void Dialog::on_LED4_released()
{
    digitalWrite(28,HIGH);

}
