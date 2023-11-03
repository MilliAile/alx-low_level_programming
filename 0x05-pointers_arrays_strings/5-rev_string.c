#include <stdio.h>
#include <string.h>
/**
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int a;
	for (a = len-1; a >= 0; a--)
	{
		*s = *(s + a);
	}
}
