#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of a dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: kind of dogs in the shop
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
