#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 */
int main(void)
{
	int n;
	int RAND_MAX;
	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 )
	{printf("is positive\n");}
	else if( n == 0)
	{printf("is zero\n");}
	else if( n > 0 )
	{printf("is negative\n");}
	return (0);
}
