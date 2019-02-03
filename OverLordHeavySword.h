/*-------------------------------------------
File: OverLordHeavySword.h
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include "Weapon.h"

#ifndef OVERLORDHEAVYSWORD_H
#define OVERLORDHEAVYSWORD_H

class OverLordHeavySword : public Weapon {
public:
	OverLordHeavySword() : Weapon("overlord heavy sword", (rand() % 26) + 25){}	// Sets the hitpoints randomly between 25 and 50

    virtual ~OverLordHeavySword() {};	

    virtual double hit(double armor);  
};

#endif /* OVERLORDHEAVYSWORD_H */