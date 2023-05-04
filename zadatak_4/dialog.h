#ifndef DIALOG_H
#define DIALOG_H

//#include "wiringPi.h"
#include <QPixmap>

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
 /*   void on_pushButton_clicked();
    void on_pushButton_released();
*/
    void on_prekidac_pressed();
    void on_prekidac_released();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
