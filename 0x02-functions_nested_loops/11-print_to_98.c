#include "main.h"
/**
 * print_to_98 - function that prints integers to 98
 * @n: the variable of the number that it to be counted up to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
		printf("\n");
}
