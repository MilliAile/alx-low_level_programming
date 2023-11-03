#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function to concatinate n element of s2 on s1
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size;

	size = strlen(s1) + n + 1;
	s1 = malloc(sizeof(char) * size);
	if (s1 == NULL)
	{
		return (NULL);
	}
	strncat(s1, s2, n);
	return (s1);
}
