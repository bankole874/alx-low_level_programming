#include "dog.h"
#include <stdlib>

/**
 * init_dog - initialize a variable of
 * type struct dog
 * @d: structure dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = *owner;
	}
}
