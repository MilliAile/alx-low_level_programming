#include "main.h"
/**
 * reverse_array - function that prints reverse of array of integers
 * @a: the array of int
 * @n: number of the array integer length
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
