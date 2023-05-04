#ifndef DIALOG_H
#define DIALOG_H

#include "wiringPi.h"

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_LED1_clicked();
    void on_LED1_released();

    void on_LED2_clicked();
    void on_LED2_released();

    void on_LED3_clicked();
    void on_LED3_released();

    void on_LED4_clicked();
    void on_LED4_released();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
