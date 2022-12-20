#include "mill.h"
/**
 * rev_string - reverse the string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char word;

	while (*(s + 1) != '\0')
		i += 1;
	i -= 1;
	while (j < i)
	{
		word = s[i];
		s[i] = s[j];
		s[j] = word;
		j++;
		i--;

}
