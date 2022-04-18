#include <stdio.h>

/**
 * main - Print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(uper_case);
	}

	putchar('\n');

	return (0);
}
