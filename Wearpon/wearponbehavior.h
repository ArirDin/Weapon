#ifndef WEARPONBEHAVIOR_H
#define WEARPONBEHAVIOR_H

#include <iostream>

using namespace std;

class WearponBehavior
{
public:
    WearponBehavior();
    virtual void useWearpon() = 0;
};

#endif // WEARPONBEHAVIOR_H
