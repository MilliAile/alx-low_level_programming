#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initializes the variables
 * @d: pointer variable for the dog type structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
