#ifndef CHARACTER_H
#define CHARACTER_H

#include "wearponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "bowandarrowbehavior.h"
#include "axebehavior.h"

class Character
{
public:
    WearponBehavior *wearpon;
    Character();
    void fight();
    void setWearpon(WearponBehavior*);
};

#endif // CHARACTER_H
