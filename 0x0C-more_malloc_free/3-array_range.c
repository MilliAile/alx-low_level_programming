#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that returns array of int from min to max
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: int pointer for the array of integer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
