#include <QCoreApplication>
#include "wearponbehavior.h"
#include "swordbehavior.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WearponBehavior *wb = new SwordBehavior();
    wb->useWearpon();
    return a.exec();
}
