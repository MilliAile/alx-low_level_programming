#include "main.h"
/**
 * _pow_recursion - function that computes the power of x raised to y
 * @x: integer to be raised to y
 * @y: integer
 * Return: int, x raised to y
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
