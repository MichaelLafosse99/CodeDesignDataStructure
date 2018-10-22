#include "Hero.h"

Hero lowestHealth(Hero hero[], int size)
{
	Hero temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (hero[i] < hero[j])
			{
				continue;
			}
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

int main()
{
	srand(time(0));

	Hero hero[3];

	lowestHealth(hero, 3);

	return 0;
}