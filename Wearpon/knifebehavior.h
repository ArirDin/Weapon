#ifndef KNIFEBEHAVIOR_H
#define KNIFEBEHAVIOR_H

#include "wearponbehavior.h"

class KnifeBehavior : public WearponBehavior
{
public:
    KnifeBehavior();
    virtual void useWearpon();
};

#endif // KNIFEBEHAVIOR_H
