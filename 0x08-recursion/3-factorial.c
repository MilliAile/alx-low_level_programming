#include "main.h"
/**
 * factorial - function that print factorial of numbers
 * @n: integer input
 * Return: the result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
