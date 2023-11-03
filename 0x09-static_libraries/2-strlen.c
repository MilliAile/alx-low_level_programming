#include <stdio.h>
/**
 * _strlen - function that gives the string length
 * @s: the value that holds the address of the string elements
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
