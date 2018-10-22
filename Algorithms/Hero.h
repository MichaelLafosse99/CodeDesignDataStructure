#pragma once
#include<cstdlib>
#include <time.h>

class Hero
{
public:
	bool operator < (const Hero & otherhero);
	Hero();
private:
	int mHealth;
};

Hero::Hero()
{
	mHealth = rand() % 11;
}

inline bool Hero::operator<(const Hero & otherhero)
{
	return this->mHealth < otherhero.mHealth;
}
