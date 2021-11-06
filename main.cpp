#include <QtGui/QApplication>
#include "maincalc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainCalc w;
    w.show();
    w.setFixedSize(280,370);

    return a.exec();
}
