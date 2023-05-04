#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,
            SIGNAL(valueChange(int)),
            ui->progressBar, SLOT(setValue(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

