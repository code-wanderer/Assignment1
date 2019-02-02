/*-------------------------------------------
File: CrazyRandomSword.h
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
	CrazyRandomSword();

    virtual ~CrazyRandomSword() {};	

    virtual double hit(double armor);  
};

#endif /* CRAZYRANDOMSWORD_H */
