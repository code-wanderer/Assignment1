/*-------------------------------------------
File: CrazyRandomSword.h
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
	CrazyRandomSword() : Weapon("crazy random sword", (rand() % 94) + 7){} // Sets the hitpoints randomly between 7 and 100

    virtual ~CrazyRandomSword() {};	

    virtual double hit(double armor);  
};

#endif /* CRAZYRANDOMSWORD_H */
