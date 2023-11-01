#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that returns array of a specific char
 * @size: the size of an array and the memory to be allocated
 * @c: the specific char of the array
 * Return: string or the array of the specific char
 * malloc - function that allacate the memory for the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
