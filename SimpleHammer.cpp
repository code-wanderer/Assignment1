/*-------------------------------------------
File: SimpleHammer.cpp
Author: Leonardo Luque
Date:2/1/19
-------------------------------------------*/

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage = 0;	// If the armor is greater than or equal to 30 the hammer will do no damage
    
    if(armor < 30){		
    	damage = hitPoints;	// Ignores armor if less than 30
    }

    return damage;
}
