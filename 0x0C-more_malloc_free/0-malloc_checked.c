#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that returns pointer to the allocated space
 * @b: the value for the size of the space to be allocated
 * Return: pointer on success, or return 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
