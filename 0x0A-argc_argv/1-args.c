#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the number of arguments passed to it
 * @argc: int type
 * @argv: pointer to char type
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
