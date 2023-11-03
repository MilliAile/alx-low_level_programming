#include "main.h"
#include <string.h>
/**
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] > 0)
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
