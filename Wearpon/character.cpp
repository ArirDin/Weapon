#include "character.h"

Character::Character()
{

}

void Character::fight(){
    wearpon->useWearpon();
}

void Character::setWearpon(WearponBehavior *w){
    this->wearpon = w;
}
