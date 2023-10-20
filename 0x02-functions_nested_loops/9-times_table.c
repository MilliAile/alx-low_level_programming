#include "main.h"
/**
 * times_table - creates a time table for the numbers upto 9
 */
void times_table(void)
{
	int a;
	int b;
	int i;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			i = a * b;
			printf("%d", i);
			if (b < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
