#include "mill.h"
#include <stdio.h>
/**
 * print_array - print the arrays
 * @a: the pointer
 * @n: the number of the elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
