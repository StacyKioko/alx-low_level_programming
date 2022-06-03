#include <stdio.h>

/**
 * main - Prints lowercase in alphabetical order
 * followed by a new line
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');

	return (0);
}
