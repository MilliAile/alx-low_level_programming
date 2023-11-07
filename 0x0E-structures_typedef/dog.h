#ifndef HEADER_H
#define HEADER_H
/**
 * struct dog - structure that define the dogs identity
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

