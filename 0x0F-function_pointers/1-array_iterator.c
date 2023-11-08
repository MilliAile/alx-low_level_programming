#include "function_pointers.h"
/**
 * array_iterator - function that calls function using function pointer
 * @array: array of integer input
 * @size: the size of the array
 * @action: pointer to the functions to be called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
