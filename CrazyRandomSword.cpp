/*-------------------------------------------
File: CrazyRandomSword.cpp
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include <cstdlib>
#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword(){
	srand(time(NULL));		// Seed made depending on the time in seconds
	Weapon("crazy random sword", (rand() % 94) + 7);	// Sets the hitpoints randomly between 7 and 100
}

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));		// Seed created dependent on time in seconds

	double MAXIGN = armor * (1/3);	// Maximum amount or armor that can be ignored
    double ignoredArmor = (rand() % (MAXIGN - 2)) + 2; // Calculates the amount of armor ignored
    double damage = hitPoints - (armor - ignoredArmor);	// Calculates the damage done after passing through armor

    return damage;
}