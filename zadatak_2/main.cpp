#include "dialog.h"
#include "wiringPi.h"
#include "softPwm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    wiringPiSetup();

    pinMode(28,OUTPUT);

    if(softPwmCreate(28,0,100) != 0 )
        exit(2);

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
