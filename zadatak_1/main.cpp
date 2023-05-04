#include "dialog.h"
#include "wiringPi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    wiringPiSetup();

    digitalWrite(25,OUTPUT);    // ovde smo inicijalizovali LED-ovku koju cemo koristiti na RPi-u

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
