#include <stdio.h>

/**
 * main - Prints alphabetical order in lowercase then upercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	
	putchar('\n');

	return (0);
}
