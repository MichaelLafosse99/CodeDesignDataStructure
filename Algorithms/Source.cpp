#include "Hero.h"

int main()
{
	srand(time(0));

	Hero hero[5];
	//Expected: five hero's should be set in order
	//from least to greatest, in terms of health, and
	// the lowest hero should be returned.
	hero->lowestHealth(hero, 5);
	//Result: The heros are put in the correct order,
	//and the hero with the lowest health is returned.
	return 0;
}