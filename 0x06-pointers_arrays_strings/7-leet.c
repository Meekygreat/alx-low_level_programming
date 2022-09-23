#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, x;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (a[x] == *(s + i))
				*(s + i) = b[x];
		}
	}
	return (s);
}
