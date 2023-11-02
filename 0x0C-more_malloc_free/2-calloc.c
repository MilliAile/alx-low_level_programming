#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allacate space for an array of elements
 * @nmemb: the number of elements
 * @size: the size of the element based on type
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);

}
