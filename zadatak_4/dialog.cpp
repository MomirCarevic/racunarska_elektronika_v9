#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap off1(":/slike/off.png");
    ui->label->setPixmap(off1.scaled(200,200,Qt::KeepAspectRatio));
}

Dialog::~Dialog()
{
    delete ui;
}

/*
void Dialog::on_pushButton_clicked()
{
    ui->label->clear();
    QPixmap on1(":/slike/on.png");
    ui->label->setPixmap(on1.scaled(200,200,Qt::KeepAspectRatio));
    digitalWrite(25,HIGH);
}

void Dialog::on_pushButton_released()
{
    ui->label->clear();
    QPixmap off1(":/slike/off.png");
    ui->label->setPixmap(off1.scaled(200,200,Qt::KeepAspectRatio));
    digitalWrite(25,LOW);
}
*/
void Dialog::on_prekidac_pressed()
{
    ui->label->clear();
    QPixmap on1(":/slike/on.png");
    ui->label->setPixmap(on1.scaled(200,200,Qt::KeepAspectRatio));
}

void Dialog::on_prekidac_released()
{
    ui->label->clear();
    QPixmap off1(":/slike/off.png");
    ui->label->setPixmap(off1.scaled(200,200,Qt::KeepAspectRatio));
}
