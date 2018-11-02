#include "HashFunction.h"

unsigned int HashFunction::badHash(const char * data, unsigned int length)
{
	unsigned int hash = 0;
	for (unsigned int i = 0; i < length; ++i)
	{
		hash += data[i];
	}

	return hash;
}

unsigned int HashFunction::myHash(const char * data, unsigned int size)
{
	unsigned int hash = 0;

	for (unsigned int i = 0; i < size; i++)
	{
		hash = (hash % size) + data[i];
	}
	return hash;
}

int main()
{
	const char* arr[3] = { "ho", "jo", "to" };

	HashFunction::myHash(arr[2], 3);
}
