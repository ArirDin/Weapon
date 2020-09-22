#include <QCoreApplication>
#include "wearponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "bowandarrowbehavior.h"
#include "axebehavior.h"
#include "character.h"
#include "king.h"
#include "knight.h"
#include "queen.h"
#include "troll.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WearponBehavior *knife = new KnifeBehavior();
    WearponBehavior *sword = new SwordBehavior();
    WearponBehavior *bow = new BowAndArrowBehavior();
    WearponBehavior *axe = new AxeBehavior();

    cout << "King:" << endl;
    Character *p = new King();
    p->fight();
    cout << "Change weapon" << endl;
    p->setWearpon(knife);
    p->fight();
    cout << endl;
    cout << "Knight:" << endl;
    Character *k = new Knight();
    k->fight();
    cout << "Change weapon" << endl;
    k->setWearpon(axe);
    k->fight();
    cout << endl;
    cout << "Queen:" << endl;
    Character *q = new Queen();
    q->fight();
    cout << "Change weapon" << endl;
    q->setWearpon(bow);
    q->fight();
    cout << endl;
    cout << "Troll:" << endl;
    Character *t = new Troll();
    t->fight();
    cout << "Change weapon" << endl;
    t->setWearpon(sword);
    t->fight();

    return a.exec();
}
