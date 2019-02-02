/*-------------------------------------------
File: OverLordHeavySword.cpp
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include <cstdlib>
#include "OverLordHeavySword.h"

OverLordHeavySword::OverLordHeavySword(){
	srand(time(NULL));		// Seed made depending on the time in seconds
	Weapon("overlord heavy sword", (rand() % 26) + 25);	// Sets the hitpoints randomly between 25 and 50
}

double OverLordHeavySword::hit(double armor) {
	srand(time(NULL));		// Seed created dependent on time in seconds

    double ignoredArmor = (rand() % 15) + 15; // Calculates the amount of armor ignored, between 15-29
    double damage = hitPoints - (armor - ignoredArmor);	// Calculates the damage done after passing through armor

    return damage;
}