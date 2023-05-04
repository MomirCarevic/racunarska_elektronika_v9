#include "dialog.h"
#include "ui_dialog.h"
#include "wiringPi.h"

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


void Dialog::on_Toggle_clicked()
{
    digitalWrite(25,HIGH);
}

void Dialog::on_Toggle_released()
{
    digitalWrite(25,LOW);
}

