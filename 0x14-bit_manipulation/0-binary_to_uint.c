#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function that converts binry to uunsigned integer
 * @b: the binary to be converted in form of string
 * Return: return the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int k = 0;

	length = strlen(b);
	if (b == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			k += _pow_recursion(2, length - 1 - i);
		}
		else if (b[i] == '0')
		{
			k += 0;
		}
		else
		{;
			return (0);
		}
	}
	return (k);
}
/**
 * _pow_recursion - function to calculate the power of 2
 * @x: the number to be calculated
 * @y: the power of the number x
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
