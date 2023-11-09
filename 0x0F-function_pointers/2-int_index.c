#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function to return array index on success
 * @array: the array input
 * @size: the size of the array
 * @cmp: function pointer that calls the functions for cmparison
 * Return: return index i on success, -1 if size<=0, and NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
