/*-------------------------------------------
File: CrazyRandomSword.cpp
Author: Leonardo Luque
Date: 2/1/19
-------------------------------------------*/

#include <cstdlib>
#include "math.h"
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));		// Seed created dependent on time in seconds

	double MAXIGN = armor * (1/3);	// Maximum amount or armor that can be ignored
    int MAX = floor(MAXIGN);		// Sets it to an integer
    double ignoredArmor = (rand() % (MAX - 1)) + 2; // Calculates the amount of armor ignored
    double damage = hitPoints - (armor - ignoredArmor);	// Calculates the damage done after passing through armor

    return damage;
}