#pragma once
#include<cstdlib>
#include <time.h>

class Hero
{
public:
	bool operator < (const Hero & otherhero);
	Hero();
	Hero lowestHealth(Hero hero[], int size);
private:
	int mHealth;
};
//A constructor that assigns a random number for health to
//each hero.
Hero::Hero()
{
	mHealth = rand() % 11;
}

//This less than operator compairs all of the heros healths.
bool Hero::operator<(const Hero & otherhero)
{
	return this->mHealth < otherhero.mHealth;
}
//This function is what swaps all of the heros in
//order from least to greatest.
Hero Hero::lowestHealth(Hero hero[], int size)
{
	//A temporary hero
	Hero temp;

	
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			//if one hero's health is less than the other's,
			//continue
			if (hero[i] < hero[j])
			{
				continue;
			}
			//if the first hero's health is greater than the other's,
			//temp is assigned the value of the first hero's health.
			//The the first hero is set to the second hero's health.
			//Finally the second hero is set to the temp, basically
			//swapping the health's of each hero to keep them in order.
			else
			{
				temp = hero[i];
				hero[i] = hero[j];
				hero[j] = temp;
				
			}
		}
	}
	return hero[0];
}