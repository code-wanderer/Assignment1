/*-------------------------------------------
File: OverLordHeavySword.cpp
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include <cstdlib>
#include "OverLordHeavySword.h"

double OverLordHeavySword::hit(double armor) {
	srand(time(NULL));		// Seed created dependent on time in seconds

    double ignoredArmor = (rand() % 15) + 15; // Calculates the amount of armor ignored, between 15-29
    double damage = hitPoints - (armor - ignoredArmor);	// Calculates the damage done after passing through armor

    return damage;
}