#ifndef SWORDBEHAVIOR_H
#define SWORDBEHAVIOR_H

#include "wearponbehavior.h"

class SwordBehavior : public WearponBehavior
{
public:
    SwordBehavior();
    virtual void useWearpon();
};

#endif // SWORDBEHAVIOR_H
