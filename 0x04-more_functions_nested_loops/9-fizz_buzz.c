main.h.txt
Who has access
A
System properties
Type
Text
Size
456 bytes
Storage used
456 bytes
Location
More functions, more nested loops
	Owner
	Antony Bahati
	Modified
	11:49 AM by Antony Bahati
	Opened
	9:48 PM by me
	Created
	11:51 AM
	No description
	Viewers can download
	#include <stdio.h>

	/**
	 *main - program that prints either number
	 *or fizz or buzz or fizzBuzz
	 *
	 *
	 *Return: returns 0
	 */

	int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
