/*-------------------------------------------
File: OverLordHeavySword.h
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include "OverLordHeavySword.h"

#ifndef OVERLORDHEAVYSWORD_H
#define OVERLORDHEAVYSWORD_H

class OverLordHeavySword : public Weapon {
public:
	OverLordHeavySword();

    virtual ~OverLordHeavySword() {};	

    virtual double hit(double armor);  
};

#endif /* OVERLORDHEAVYSWORD_H */