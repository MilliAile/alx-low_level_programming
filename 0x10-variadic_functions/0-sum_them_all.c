#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all parameters passed
 * @n: the amount of parameters expected
 * Return: sum on success, 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j, sum = 0;
	va_list start;

	if (n == 0)
		return (0);
	va_start(start, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(start, int);
		sum += j;
	}
	va_end(start);
	return (sum);
}
