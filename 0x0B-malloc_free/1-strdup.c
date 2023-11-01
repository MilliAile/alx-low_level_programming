#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function to return duplicate of string
 * @str: the string to be duplicated
 * Return: return the duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	i = strlen(str);
	dup = malloc(sizeof(char) * i);
	if (dup == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		dup[j] = str[j];
		j++;
	}
	return (dup);
}
