#include <stdio.h>
#include "mill.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);

}
