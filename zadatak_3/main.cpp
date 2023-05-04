#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    wiringPiSetup();

    digitalWrite(25,OUTPUT);    // ovde smo inicijalizovali LED-ovku koju cemo koristiti na RPi-u
    digitalWrite(26,OUTPUT);
    digitalWrite(27,OUTPUT);
    digitalWrite(28,OUTPUT);

    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
