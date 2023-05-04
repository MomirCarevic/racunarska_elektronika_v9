#include "dialog.h"
#include "ui_dialog.h"
#include "wiringPi.h"
#include "softPwm.h"

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


void Dialog::on_horizontalSlider_valueChanged(int value)
{
    int i = 0;

    i++;

    if(i>100)
        i = 100;
    if(i < 0)
        i = 0;
    fflush(stdout);
    softPwmWrite(28,i);

}

