#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t-Typedef for struct dog
 */
typedef struct dog dog_t;
#endif
