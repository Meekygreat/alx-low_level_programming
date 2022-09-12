#include <stdio.h>

/**
 *main - Entry point
 *Result: Always 0 (Success)
 */

int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
