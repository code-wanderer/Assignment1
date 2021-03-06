/*-------------------------------------------
File: SimpleHammer.h
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("simple hammer", 25.0) { // Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    }

    virtual ~SimpleHammer() {};	

    virtual double hit(double armor);  

};

#endif /* SIMPLEHAMMER_H */