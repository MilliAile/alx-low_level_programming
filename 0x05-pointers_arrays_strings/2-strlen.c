#include <stdio.h>
#include "mill.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
