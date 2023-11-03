#include "main.h"
#include "stdlib.h"
/**
 * array_range - function that returns array of int from min to max
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: int pointer for the array of integer
 */
int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = abs(max) - abs(min) + 2;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
