#include <QCoreApplication>
#include "wearponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "character.h"
#include "king.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p->fight();
    WearponBehavior *knife = new KnifeBehavior();
    p->setWearpon(knife);
    p->fight();

    return a.exec();
}
